/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 18:57:26 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/24 16:48:43 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

int	main (void)
{
	Harl	Karen;

	Karen.complain("DEBUG");
	std::cout << std::endl << std::endl;
	Karen.complain("INFO");
	std::cout << std::endl << std::endl;
	Karen.complain("WARNING");
	std::cout << std::endl << std::endl;
	Karen.complain("ERROR");
	std::cout << std::endl << std::endl;
	return (0);
}
