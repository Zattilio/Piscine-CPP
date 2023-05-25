/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:43:18 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/24 18:29:05 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	hello = "HI THIS IS BRAIN";
	std::string	*stringPTR = &hello;
	std::string	&stringREF = hello;

	std::cout << "The memory address of the string variable:	" << &hello << std::endl;
	std::cout << "The memory address held by stringPTR:		" << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF:		"<< &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "The value of the string variable:		" << hello << std::endl;
	std::cout << "The value pointed to by stringPTR:		" << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF:		" << stringREF << std::endl;

	return (0);
}
