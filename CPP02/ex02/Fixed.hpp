/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:55:41 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/28 14:46:06 by jlanza           ###   ########.fr       */
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
	static const bool	_verbose;

public:
	Fixed(void);
	Fixed(int n);
	Fixed(float f);
	~Fixed();
	Fixed(Fixed const & src);
	Fixed & operator=(Fixed const & rhs);

	bool operator>(Fixed const & rhs) const;
	bool operator<(Fixed const & rhs) const;
	bool operator>=(Fixed const & rhs) const;
	bool operator<=(Fixed const & rhs) const;
	bool operator==(Fixed const & rhs) const;
	bool operator!=(Fixed const & rhs) const;

	Fixed operator+(Fixed const & rhs) const;
	Fixed operator-(Fixed const & rhs) const;
	Fixed operator*(Fixed const & rhs) const;
	Fixed operator/(Fixed const & rhs) const;
	Fixed operator--(int const);
	Fixed operator--(void);
	Fixed operator++(int const);
	Fixed operator++(void);

	static Fixed max(Fixed & a, Fixed & b);
	static Fixed min(Fixed & a, Fixed & b);
	static Fixed max(const Fixed & a, const Fixed & b);
	static Fixed min(const Fixed & a, const Fixed & b);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream & operator<<(std::ostream & os, Fixed const & instance);

#endif
