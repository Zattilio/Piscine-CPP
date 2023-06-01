/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:13:22 by jlanza            #+#    #+#             */
/*   Updated: 2023/06/01 14:52:44 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	ct1("trap1");

	ct1.attack("enemy1");
	ct1.takeDamage(5);
	ct1.beRepaired(5);
	ct1.takeDamage(105);
	ct1.beRepaired(3);

	std::cout << std::endl;

	ScavTrap ct2("trap2");
	ct2.attack("enemie2");
	ct2.guardGate();
	return (0);
}
