/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:55:47 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/28 14:51:59 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::nbr_of_fractional_bits = 8;
const bool Fixed::_verbose = false;

Fixed::Fixed(void)
{
	if (_verbose)
		std::cout << "Default constructor called" << std::endl;
	this->fixed_point_number = 0;
}

Fixed::Fixed(int n)
{
	if (_verbose)
		std::cout << "Int constructor called" << std::endl;
	this->fixed_point_number = n * 256;
}

Fixed::Fixed(float f)
{
	if (_verbose)
		std::cout << "Float constructor called" << std::endl;
	this->fixed_point_number = roundf(f * 256);
}

Fixed::~Fixed()
{
	if (_verbose)
		std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	if (_verbose)
		std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	if (_verbose)
		std::cout << "Copy assigment operator called" << std::endl;
	this->fixed_point_number = rhs.getRawBits();
	return (*this);
}

bool Fixed::operator>(Fixed const & rhs) const
{
	return (this->fixed_point_number > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const & rhs) const
{
	return (this->fixed_point_number < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const & rhs) const
{
	return (this->fixed_point_number >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const & rhs) const
{
	return (this->fixed_point_number <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const & rhs) const
{
	return (this->fixed_point_number == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const & rhs) const
{
	return (this->fixed_point_number != rhs.getRawBits());
}

Fixed Fixed::operator+(Fixed const & rhs) const
{
	Fixed	tmp(this->toFloat() + rhs.toFloat());
	return (tmp);
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
	Fixed	tmp(this->toFloat() - rhs.toFloat());
	return (tmp);
}

Fixed Fixed::operator*(Fixed const & rhs) const
{
	Fixed	tmp(this->toFloat() * rhs.toFloat());
	return (tmp);
}

Fixed Fixed::operator/(Fixed const & rhs) const
{
	if (rhs.toFloat() == 0)
	{
		std::cerr << "Warning: Can't divide by 0" << std::endl;
		return (Fixed(0));
	}
	Fixed	tmp(this->toFloat() / rhs.toFloat());
	return (tmp);
}

Fixed Fixed::operator--(int const) // i--
{
	Fixed	tmp(*this);
	this->fixed_point_number -= 1;
	return (tmp);
}

Fixed Fixed::operator--(void) // --i
{
	this->fixed_point_number -= 1;
	return (*this);
}

Fixed Fixed::operator++(int const) // i++
{
	Fixed	tmp(*this);
	this->fixed_point_number += 1;
	return (tmp);
}

Fixed Fixed::operator++(void) // ++i
{
	this->fixed_point_number += 1;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->fixed_point_number);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixed_point_number = raw;
}

float	Fixed::toFloat(void) const
{
	float	f(this->fixed_point_number);
	return (f / 256);
}

int		Fixed::toInt(void) const
{
	return (roundf(this->fixed_point_number / 256));
}

std::ostream & operator<<(std::ostream & os, Fixed const & instance)
{
	os << instance.toFloat();
	return (os);
}

Fixed Fixed::max(Fixed & a, Fixed & b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed Fixed::max(const Fixed & a, const Fixed & b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed Fixed::min(Fixed & a, Fixed & b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed Fixed::min(const Fixed & a, const Fixed & b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}
