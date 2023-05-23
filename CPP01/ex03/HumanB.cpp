/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:18:53 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/23 14:46:43 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon & weapon)
{
	this->_weapon = &weapon;
	return ;
}
