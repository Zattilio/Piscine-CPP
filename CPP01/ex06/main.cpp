/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 18:57:26 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/25 12:45:40 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

int	level_to_int(char *str)
{
	std::string	tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (str == tab[i])
			return (i);
	}
	return (-1);
}

int	main (int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}

	Harl		Karen;
	std::string	str(argv[1]);

	switch (level_to_int(argv[1]))
	{
	case 0:
		Karen.complain("DEBUG");
	case 1:
		Karen.complain("INFO");
	case 2:
		Karen.complain("WARNING");
	case 3:
		Karen.complain("ERROR");
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
	return (0);
}
