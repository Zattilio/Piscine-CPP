/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:46:14 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/28 20:52:17 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "./Fixed.hpp"

class Point
{

private:
	Fixed	_x;
	Fixed	_y;

public:
	Point();
	Point(float x, float y);
	~Point();

	Point(Point const & src);
	Point & operator=(Point const & rhs);

	Fixed	getX(void) const;
	Fixed	getY(void) const;
	void	setX(Fixed x);
	void	setY(Fixed y);
	void	setXY(Fixed x, Fixed y);
};

#endif
