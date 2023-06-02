/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 04:02:53 by jlanza            #+#    #+#             */
/*   Updated: 2023/06/02 04:38:04 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	this->type = "unknown";
	std::cout << "Animal Constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal(Animal const & src)
{
	this->type = src.type;
	std::cout << "Copy Constructor called" << std::endl;
}

Animal & Animal::operator=(Animal const & rhs)
{
	this->type = rhs.type;
	std::cout << "= operator of Animal called" << std::endl;
	return (*this);
}

void	Animal::makeSound(void) const
{
}

std::string	Animal::getType(void) const
{
	return (this->type);
}
