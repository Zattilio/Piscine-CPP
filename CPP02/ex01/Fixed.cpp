/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:55:47 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/25 18:02:22 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::nbr_of_fractional_bits = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point_number = 0;
}

Fixed::Fixed(int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point_number = n * 256;
}

Fixed::Fixed(float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point_number = roundf(f * 256);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixed_point_number = src.getRawBits();
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->fixed_point_number = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point_number);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
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
	int	;//in progress

	std::os << instance.getRawBits() / 256;
	n = instance.getRawBits();
	while (n > 0)
	{

	}
}
