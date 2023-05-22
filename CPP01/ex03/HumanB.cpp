/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:18:53 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/22 18:14:38 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
	return ;
}

HumanB::~HumanB()
{
	delete this->weapon;
	return ;
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon weapon)
{
	Weapon	*weapon_ptr = new Weapon;

	if (this->weapon != NULL)
		delete this->weapon;

	weapon_ptr->setType(weapon.getType());
	this->weapon = weapon_ptr;
	return ;
}
