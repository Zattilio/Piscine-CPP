/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 05:00:35 by jlanza            #+#    #+#             */
/*   Updated: 2023/06/02 05:06:41 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain::Brain(Brain const & src)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = src.ideas[i];
	}
	std::cout << "Brain Copy Constructor called" << std::endl;
}

Brain & Brain::operator=(Brain const & rhs)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = rhs.ideas[i];
	}
	std::cout << "= operator of Brain called" << std::endl;
	return (*this);
}
