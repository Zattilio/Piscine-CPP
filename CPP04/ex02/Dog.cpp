/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 04:10:46 by jlanza            #+#    #+#             */
/*   Updated: 2023/06/02 06:11:09 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(Dog const & src) : Animal(src)
{
	this->type = src.type;
	this->brain = new Brain();
	for (int i = 0; i < 100; i++)
	{
		brain->ideas[i] = src.getBrainIndex(i);
	}
	std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
	this->type = rhs.type;
	for (int i = 0; i < 100; i++)
	{
		brain->ideas[i] = rhs.getBrainIndex(i);
	}
	std::cout << "= operator of Dog called" << std::endl;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouuf" << std::endl;
}

void	Dog::setBrainIndex(const int i, std::string str)
{
	this->brain->ideas[i] = str;
}

std::string	Dog::getBrainIndex(const int i) const
{
	return (this->brain->ideas[i]);
}
