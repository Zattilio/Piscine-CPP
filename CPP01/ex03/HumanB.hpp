/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:45:59 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/22 17:48:13 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "./Weapon.hpp"

class	HumanB
{

public:

	HumanB(std::string name);
	~HumanB();

	void	setWeapon(Weapon weapon);
	void	attack();

	Weapon			*weapon;
	std::string		name;

};

#endif
