/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:55:50 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/28 14:59:37 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << std::endl << "custom tests" << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	std::cout << a / 0 << std::endl;
	std::cout << Fixed(5) / Fixed(2) << std::endl;
	std::cout << Fixed(5.1f) + Fixed(2) << std::endl;
	std::cout << Fixed(5) - Fixed(2.5f) << std::endl;
	std::cout << Fixed(5.5f) * Fixed(2) << std::endl;
	if (Fixed(2) > Fixed(1))
		std::cout << "superior" << std::endl;
	else
		std::cout << "inferior or equal" << std::endl;

	if (Fixed(1) < Fixed(5))
		std::cout << "inferior" << std::endl;
	else
		std::cout << "superior or equal" << std::endl;

	if (Fixed(2) == Fixed(2))
		std::cout << "equal" << std::endl;
	else
		std::cout << "not equal" << std::endl;

	if (Fixed(2) != Fixed(1))
		std::cout << "not equal" << std::endl;
	else
		std::cout << "equal" << std::endl;
	return 0;
}
