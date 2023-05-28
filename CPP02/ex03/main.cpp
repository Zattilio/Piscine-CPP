/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:55:50 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/28 22:22:03 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main( void )
{
	if (bsp(Point(2, 2), Point(-1, -1), Point(-2, 4), Point(0, 0))) // on a edge of a triangle
		std::cout << "(0, 0) is inside triangle" << std::endl;
	else
		std::cout << "(0, 0) is not inside triangle" << std::endl;


	if (bsp(Point(2, 2), Point(-1, -1), Point(-2, 4), Point(-2, 4))) // on a vertex of a triangle
		std::cout << "(-2, 4) is inside triangle" << std::endl;
	else
		std::cout << "(-2, 4) is not inside triangle" << std::endl;


	if (bsp(Point(2, 2), Point(-1, -1), Point(-2, 4), Point(5, 5))) // outside triangle
		std::cout << "(5, 5) is inside triangle" << std::endl;
	else
		std::cout << "(5, 5) is not inside triangle" << std::endl;

	std::cout << std::endl;
	
	if (bsp(Point(2, 2), Point(-1, -1), Point(-2, 4), Point(0, 1))) // inside a triangle
		std::cout << "(0, 1) is inside triangle" << std::endl;
	else
		std::cout << "(0, 1) is not inside triangle" << std::endl;

	return 0;
}
