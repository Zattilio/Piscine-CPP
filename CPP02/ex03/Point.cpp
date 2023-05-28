/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 20:32:56 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/28 20:53:01 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(void) : _x(0), _y(0)
{
}

Point::Point(float x, float y) : _x(x), _y(y)
{
}

Point::~Point()
{
}

Point::Point(Point const & src)
{
	this->_x = src._x;
	this->_y = src._y;
}

Fixed	Point::getX(void) const
{
	return (this->_x);
}

Fixed	Point::getY(void) const
{
	return (this->_y);
}

void	Point::setX(Fixed x)
{
	this->_x = x;
}

void	Point::setY(Fixed y)
{
	this->_y = y;
}

void	Point::setXY(Fixed x, Fixed y)
{
	this->_x = x;
	this->_y = y;
}

Point & Point::operator=(Point const & rhs)
{
	this->_x = rhs._x;
	this->_y = rhs._y;
	return (*this);
}
