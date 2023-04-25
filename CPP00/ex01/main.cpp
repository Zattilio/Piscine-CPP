/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:11:05 by jlanza            #+#    #+#             */
/*   Updated: 2023/04/25 18:26:27 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"

int	main(int argc, char *argv[])
{
	std::string	buf;
	PhoneBook	book;

	while (1)
	{
		std::cin >> buf;
		if (std::cin.eof())
			return (1);
		if (buf == "ADD")
			book.add();
		if (buf == "SEARCH")
			book.search();
		if (buf == "EXIT")
			return (0);
	}
	(void)argc;
	(void)argv;
}
