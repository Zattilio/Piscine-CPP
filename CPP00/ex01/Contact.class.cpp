/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:50:44 by jlanza            #+#    #+#             */
/*   Updated: 2023/04/28 17:04:55 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact()		{ return; }
Contact::~Contact ()	{ return; }

std::string	Contact::get_first_name(void) const		{ return this->_first_name; }
std::string	Contact::get_last_name(void) const		{ return this->_last_name; }
std::string	Contact::get_nickname(void) const		{ return this->_nickname; }
std::string	Contact::get_phone_number(void) const	{ return this->_phone_number; }
std::string	Contact::get_darkest_secret(void) const	{ return this->_darkest_secret; }

void	Contact::set_contact_strings(std::string first_name,
							std::string last_name,
							std::string nickname,
							std::string phone_number,
							std::string darkest_secret)
{
	this->_first_name = first_name;
	this->_last_name = last_name;
	this->_nickname = nickname;
	this->_phone_number = phone_number;
	this->_darkest_secret = darkest_secret;
}

void	Contact::print_contact(void) const
{
	std::cout <<	"	first name:		" << this->_first_name << std::endl;
	std::cout <<	"	last name:		" << this->_last_name << std::endl;
	std::cout <<	"	nickname:		" << this->_nickname << std::endl;
	std::cout <<	"	phone_number:		" << this->_phone_number << std::endl;
	std::cout <<	"	darkest secret:		" << this->_darkest_secret << std::endl;
}
