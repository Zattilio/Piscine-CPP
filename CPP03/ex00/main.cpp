/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:13:22 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/31 17:21:58 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	ct1("trap1");

	ct1.attack("enemy1");
	ct1.takeDamage(5);
	ct1.beRepaired(12);
	ct1.takeDamage(17);
	ct1.beRepaired(3);

	std::cout << std::endl;

	ClapTrap ct2("trap2");
	ct2.attack("enemie2");
	ct2.attack("enemie2");
	ct2.attack("enemie2");
	ct2.attack("enemie2");
	ct2.attack("enemie2");
	ct2.attack("enemie2");
	ct2.attack("enemie2");
	ct2.attack("enemie2");
	ct2.attack("enemie2");
	ct2.attack("enemie2");
	ct2.attack("enemie2");
	return (0);
}
