/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:13:22 by jlanza            #+#    #+#             */
/*   Updated: 2023/06/01 20:35:23 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	ct1("trap1");

	ct1.attack("enemy1");
	ct1.takeDamage(5);
	ct1.beRepaired(5);
	ct1.takeDamage(105);
	ct1.beRepaired(3);

	std::cout << std::endl;

	DiamondTrap ct2("trap2");
	ct2.attack("enemie2");
	ct2.guardGate();
	ct2.highFivesGuys();
	ct2.whoAmI();
	std::cout << std::endl;
	ct2 = ct1;
	ct2.whoAmI();
	return (0);
}
