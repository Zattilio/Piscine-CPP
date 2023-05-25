/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:55:41 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/25 13:06:34 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{

private:
	/* data */

public:
	Fixed(/* args */);
	~Fixed();
	Fixed(Fixed const & src);
	Fixed & operator=(Fixed const & rhs);

};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

Fixed::Fixed(/* args */)
{
}

Fixed::~Fixed()
{
}

