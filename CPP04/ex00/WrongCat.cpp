/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 04:18:04 by jlanza            #+#    #+#             */
/*   Updated: 2023/06/02 04:38:25 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "WrongCat Constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src)
{
	this->type = src.type;
	std::cout << "WrongCat Copy Constructor called" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	this->type = rhs.type;
	std::cout << "= operator of WrongCat called" << std::endl;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Miaaaaouuuu" << std::endl;
}
