/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 04:10:46 by jlanza            #+#    #+#             */
/*   Updated: 2023/06/02 04:38:50 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->type = "Dog";
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(Dog const & src) : Animal(src)
{
	this->type = src.type;
	std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
	this->type = rhs.type;
	std::cout << "= operator of Dog called" << std::endl;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouuf" << std::endl;
}
