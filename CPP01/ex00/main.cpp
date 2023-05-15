/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:39:19 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/15 16:07:08 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int	main(void)
{
	Zombie *undead1;

	undead1 = newZombie("undead1");
	undead1->announce();
	delete undead1;

	std::cout << std::endl;

	randomChump("undead2");
	return (0);
}
