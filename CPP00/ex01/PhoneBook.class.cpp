/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:01:44 by jlanza            #+#    #+#             */
/*   Updated: 2023/04/28 18:51:31 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	this->_index = -1;
	this->_number_of_contact = 0;
	return;
}

PhoneBook::~PhoneBook(void) {}

int	PhoneBook::add(void)
{
	std::string	first_name = "";
	std::string	last_name = "";
	std::string	nickname = "";
	std::string	phone_number = "";
	std::string	darkest_secret = "";

	this->_index = (this->_index + 1) % 8;
	if (this->_number_of_contact < 8)
		this->_number_of_contact++;

	std::cout << std::endl;

	while (first_name == "")
	{
		std::cout << "	Enter first name: ";
		std::getline(std::cin, first_name);
		if (std::cin.eof())
			return (-1);
	}
	while (last_name == "")
	{
		std::cout << "	Enter last name: ";
		std::getline(std::cin, last_name);
		if (std::cin.eof())
			return (-1);
	}
	while (nickname == "")
	{
		std::cout << "	Enter nickname: ";
		std::getline(std::cin, nickname);
		if (std::cin.eof())
			return (-1);
	}
	while (phone_number == "")
	{
		std::cout << "	Enter phone number: ";
		std::getline(std::cin, phone_number);
		if (std::cin.eof())
			return (-1);
	}
	while (darkest_secret == "")
	{
		std::cout << "	Enter your darkest secret: ";
		std::getline(std::cin, darkest_secret);
		if (std::cin.eof())
			return (-1);
	}

	this->_contact[_index].set_contact_strings(first_name, last_name, nickname, phone_number, darkest_secret);
	return (0);
}

static void	print_shortened(std::string str)
{
	if (str.size() <= 10)
	{
		for (unsigned long index = 0; index < 10 - str.size(); index++)
			std::cout << " ";
		std::cout << str;
	}
	else
		std::cout << str.substr(0, 9) << ".";
}

void	PhoneBook::search(void)
{
	std::string	contact_index;

	if (this->_number_of_contact == 0)
	{
		std::cout << "No contact inside phonebook, use the command \"ADD\" to create a contact" << std::endl;
		return;
	}
	std::cout << std::endl << "     index|first name| last name|  nickname";
	std::cout << std::endl;
	for (int i = 0; i < this->_number_of_contact; i++)
	{
		std::cout << "         " << i << "|";
		print_shortened(this->_contact[i].get_first_name());
		std::cout << "|";
		print_shortened(this->_contact[i].get_last_name());
		std::cout << "|";
		print_shortened(this->_contact[i].get_nickname());
		std::cout << std::endl;
	}
	std::cout << std::endl << "Enter one contact index: ";
	std::getline(std::cin, contact_index);
	if (!std::cin.eof())
		this->select_contact(contact_index);
	return;
}

int	PhoneBook::get_index(void) const
{
	return (this->_index);
}

void	PhoneBook::select_contact(std::string contact_index) const
{
	if (contact_index == "0" && this->_number_of_contact >= 1)
		this->_contact[0].print_contact();
	else if (contact_index == "1" && this->_number_of_contact >= 2)
		this->_contact[1].print_contact();
	else if (contact_index == "2" && this->_number_of_contact >= 3)
		this->_contact[2].print_contact();
	else if (contact_index == "3" && this->_number_of_contact >= 4)
		this->_contact[3].print_contact();
	else if (contact_index == "4" && this->_number_of_contact >= 5)
		this->_contact[4].print_contact();
	else if (contact_index == "5" && this->_number_of_contact >= 6)
		this->_contact[5].print_contact();
	else if (contact_index == "6" && this->_number_of_contact >= 7)
		this->_contact[6].print_contact();
	else if (contact_index == "7" && this->_number_of_contact >= 8)
		this->_contact[7].print_contact();
	else
		std::cout << "Not a valid index" << std::endl;
}
