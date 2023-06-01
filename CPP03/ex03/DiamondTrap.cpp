/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 16:47:19 by jlanza            #+#    #+#             */
/*   Updated: 2023/06/01 21:12:29 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	this->_name = "default";
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = ScavTrap::_attack_damage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 30;
	std::cout << "String Constructor of DiamondTrap called (" << this->_name << ")" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor of DiamondTrap called (" << this->_name << ")" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	std::cout << "Copy Constructor of DiamondTrap called (" << this->_name << ")" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	ClapTrap::_name = this->_name + "_clap_name";
	std::cout << "DiamondTrap Assignation operator called" << std::endl;
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "my diamond name is " << this->_name;
	std::cout << " and my clap trap name is " << ClapTrap::_name << std::endl;
}
