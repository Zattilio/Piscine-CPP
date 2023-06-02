/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 04:18:04 by jlanza            #+#    #+#             */
/*   Updated: 2023/06/02 04:38:25 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	this->type = "Cat";
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(Cat const & src) : Animal(src)
{
	this->type = src.type;
	std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat & Cat::operator=(Cat const & rhs)
{
	this->type = rhs.type;
	std::cout << "= operator of Cat called" << std::endl;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaaaaouuuu" << std::endl;
}
