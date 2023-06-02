/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 04:02:53 by jlanza            #+#    #+#             */
/*   Updated: 2023/06/02 04:38:04 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->type = "unknown";
	std::cout << "WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	this->type = src.type;
	std::cout << "Copy Constructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	this->type = rhs.type;
	std::cout << "= operator of WrongAnimal called" << std::endl;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "*wrong animal sound*" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}
