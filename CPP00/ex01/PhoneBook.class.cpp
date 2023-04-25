/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:01:44 by jlanza            #+#    #+#             */
/*   Updated: 2023/04/25 18:28:12 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
	return;
}

PhoneBook::~PhoneBook(void) {}

int	PhoneBook::add(void)
{
	this->index = (this->index + 1) % 8;
	std::cout << "Enter first name:" << std::endl;
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

void	PhoneBook::search(void)
{
	return;
}

int	PhoneBook::get_index(void) const
{
	return (this->index);
}
