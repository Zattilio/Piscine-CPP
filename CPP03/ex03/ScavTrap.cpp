/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:03:33 by jlanza            #+#    #+#             */
/*   Updated: 2023/06/01 20:58:33 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->_name = "default";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "String Constructor of ScavTrap called (" << name << ")" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor of ScavTrap called (" << this->_name << ")" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
	std::cout << "Copy Constructor of ScavTrap called (" << this->_name << ")" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	std::cout << "= operator of ScavTrap called" << std::endl;
	return (*this);
}

void	ScavTrap::attack(const std::string & target)
{
	if (this->_hit_points <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " is broken and can't do anything..." << std::endl;
		return ;
	}
	if (this->_energy_points <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " has no energy and can't do anything..." << std::endl;
		return ;
	}
	this->_energy_points--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing ";
	std::cout << this->_attack_damage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " is entering 'Gate keeper' mode." << std::endl;
}
