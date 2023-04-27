/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:01:44 by jlanza            #+#    #+#             */
/*   Updated: 2023/04/27 16:22:45 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = -1;
	return;
}

PhoneBook::~PhoneBook(void) {}

int	PhoneBook::add(void)
{
	this->index = (this->index + 1) % 8;
	std::cout << std::endl << "Enter first name:" << std::endl;
	std::cin >> this->contact[this->index].first_name;
	if (std::cin.eof())
		return (-1);
	std::cout << "Enter last name:" << std::endl;
	std::cin >> this->contact[this->index].last_name;
	if (std::cin.eof())
		return (-1);
	std::cout << "Enter nickname:" << std::endl;
	std::cin >> this->contact[this->index].nickname;
	if (std::cin.eof())
		return (-1);
	std::cout << "Enter phone number:" << std::endl;
	std::cin >> this->contact[this->index].phone_number;
	if (std::cin.eof())
		return (-1);
	std::cout << "Enter your darkest secret:" << std::endl;
	std::cin >> this->contact[this->index].darkest_secret;
	if (std::cin.eof())
		return (-1);
	return (0);
}

static void	print_shortened(std::string str)
{
	if (str.size() <= 10)
	{
		std::cout << str;
		for (unsigned long index = 0; index < 10 - str.size(); index++)
			std::cout << " ";
	}
	else
		std::cout << str.substr(0, 9) << ".";
}

void	PhoneBook::search(void)
{
	std::cout << std::endl << "first name|last name |nickname  |phone nbr.|darkest secret";
	std::cout << std::endl;
	for (int i = 0; i < 8; i++)
	{
		print_shortened(this->contact[i].first_name);
		std::cout << "|";
		print_shortened(this->contact[i].last_name);
		std::cout << "|";
		print_shortened(this->contact[i].nickname);
		std::cout << "|";
		print_shortened(this->contact[i].phone_number);
		std::cout << "|";
		print_shortened(this->contact[i].darkest_secret);
		std::cout << std::endl;
	}
	return;
}

int	PhoneBook::get_index(void) const
{
	return (this->index);
}
