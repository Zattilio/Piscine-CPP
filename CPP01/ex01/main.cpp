/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:39:19 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/15 16:07:45 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"


int	main(void)
{
	Zombie *horde;

	horde = zombieHorde(3, "toto");

	for (int i = 0; i < 3; i++)
	{
		horde[i].announce();
	}

	delete[] horde;

	return (0);
}
