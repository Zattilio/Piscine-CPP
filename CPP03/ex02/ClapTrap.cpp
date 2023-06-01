/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:19:42 by jlanza            #+#    #+#             */
/*   Updated: 2023/06/01 20:51:53 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_name = "default";
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "String Constructor of Claptrap called (" << name << ")" << std::endl;
	this->_name = name;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor of ClapTrap called (" << this->_name << ")" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	std::cout << "Copy Constructor of Claptrap called (" << this->_name << ")" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	std::cout << "= operator of ClapTrap called" << std::endl;
	return (*this);
}

void	ClapTrap::attack(const std::string & target)
{
	if (this->_hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is broken and can't do anything..." << std::endl;
		return ;
	}
	if (this->_energy_points <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy and can't do anything..." << std::endl;
		return ;
	}
	this->_energy_points--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing ";
	std::cout << this->_attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " takes " << std::min((const int)this->_hit_points, (const int)amount);
	std::cout << " points of damage." << std::endl;
	this->_hit_points -= std::min((const int)this->_hit_points, (const int)amount);
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is broken and can't do anything..." << std::endl;
		return ;
	}
	if (this->_energy_points <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy and can't do anything..." << std::endl;
		return ;
	}
	this->_energy_points--;
	this->_hit_points += amount;
	std::cout << "ClapTrap " << this->_name << " is repaired and gains " << amount;
	std::cout << " hit points!" << std::endl;
}
