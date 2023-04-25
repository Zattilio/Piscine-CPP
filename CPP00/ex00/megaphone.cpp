/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:29:12 by jlanza            #+#    #+#             */
/*   Updated: 2023/04/25 17:05:52 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	megaphone(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if ('a' <= arg[i] && arg[i] <= 'z')
			arg[i] = arg[i] - 32;
		i++;
	}
	std::cout << arg;
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	while (i < argc)
	{
		megaphone(argv[i]);
		i++;
	}
	return (0);
}
