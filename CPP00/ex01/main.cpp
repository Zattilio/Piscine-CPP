/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:11:05 by jlanza            #+#    #+#             */
/*   Updated: 2023/04/27 16:18:40 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"

int	main(int argc, char *argv[])
{
	std::string	buf;
	PhoneBook	book;

	(void)argv;
	if (argc > 1)
	{
		std::cerr << "Too many arguments.";
		return (1);
	}
	std::cout << "Enter command:" << std::endl;
	while (1)
	{
		std::cin >> buf;
		if (std::cin.eof())
			return (1);
		else if (buf == "ADD")
			book.add();
		else if (buf == "SEARCH")
			book.search();
		else if (buf == "EXIT")
			return (0);
		else
			std::cout << "Invalid command: use ADD, SEARCH or EXIT" << std::endl;
		std::cout << std::endl << "Enter command:" << std::endl;
	}
}
