/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 18:58:54 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/24 18:47:50 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	f[0] = &Harl::debug;
	f[1] = &Harl::info;
	f[2] = &Harl::warning;
	f[3] = &Harl::error;
	str[0] = "DEBUG";
	str[1] = "INFO";
	str[2] = "WARNING";
	str[3] = "ERROR";
}

Harl::~Harl()
{
}

void	Harl::debug(void) const
{
	std::cout << "[ DEBUG ]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.";
	std::cout << std::endl << "I really do!" << std::endl;
	std::cout << std::endl;
}

void	Harl::info(void) const
{
	std::cout << "[ INFO ]" << std::endl << "I cannot believe adding extra bacon costs more money.";
	std::cout << std::endl << "You didn’t put enough bacon in my burger!";
	std::cout << std::endl << "If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
}

void	Harl::warning(void) const
{
	std::cout << "[ WARNING ]" << std::endl << "I think I deserve to have some extra bacon for free.";
	std::cout << std::endl << "I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void	Harl::error(void) const
{
	std::cout << "[ ERROR ]" << std::endl << "This is unacceptable!";
	std::cout << std::endl << "I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void	Harl::complain( std::string level )
{
	int	i;

	i = 0;
	while (level != this->str[i])
		i++;
	if (level == this->str[i])
		(this->*f[i])();
}
