/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 20:55:37 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/28 22:13:08 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	orient(Point const a, Point const b, Point const c)
{
	Point	VectorAB((b.getX() - a.getX()).toFloat(), (b.getY() - a.getY()).toFloat());
	Point	VectorAC((c.getX() - a.getX()).toFloat(), (c.getY() - a.getY()).toFloat());
	float cross_product = (VectorAB.getX() * VectorAC.getY() - VectorAB.getY() * VectorAC.getX()).toFloat();
	if (cross_product > 0)
		return 1;
	if (cross_product == 0)
		return 0;
	return -1;
}


bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	int	turns;

	turns = orient(a, b, point) + orient(b, c, point) + orient(c, a, point);
	if (turns == 3 || turns == -3)
		return (true);
	else
		return (false);
}
