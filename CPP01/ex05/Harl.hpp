/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 18:58:51 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/24 18:47:25 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{

private:
	std::string	str[4];
	void	(Harl::*f[4])(void) const;
	void	debug(void) const;
	void	info(void) const;
	void	warning(void) const;
	void	error(void) const;

public:
	Harl();
	~Harl();
	void	complain( std::string level );
};
