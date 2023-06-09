/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:55:47 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/25 17:49:20 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::nbr_of_fractional_bits = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point_number = 0;
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

