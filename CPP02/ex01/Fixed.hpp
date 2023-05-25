/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:55:41 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/25 17:43:23 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{

private:
	int					fixed_point_number;
	static const int	nbr_of_fractional_bits;

public:
	Fixed(void);
	Fixed(int n);
	Fixed(float f);
	~Fixed();

	Fixed(Fixed const & src);
	Fixed & operator=(Fixed const & rhs);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream & operator<<(std::ostream & os, Fixed const & instance);

#endif
