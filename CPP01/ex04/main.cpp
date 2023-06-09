/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:51:08 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/25 12:45:18 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

void	ft_replace(std::string & str, std::string const search, std::string const replace, std::ofstream *ofs)
{
	int	pos;

	while (str.find(search) != std::string::npos)
	{
		pos = str.find(search);
		*ofs << str.substr(0, pos);
		*ofs << replace;
		str.erase(0, pos + search.size());
	}
	*ofs << str;
}

int	main(int argc, char *argv[])
{
	std::ostringstream	buf;
	std::string			str;

	if (argc != 4 || !argv[1][0] || !argv[2][0] || !argv[3][0])
	{
		std::cerr << "Arguments invalid" << std::endl;
		return (1);
	}

	std::string			search(argv[2]);
	std::string			replace(argv[3]);
	std::ifstream	ifs(argv[1]);
	if (!ifs.is_open())
	{
		std::cerr << "Can't open " << argv[1] << std::endl;
		return (2);
	}

	std::string ofs_name(argv[1]);
	ofs_name += ".replace";
	std::ofstream	ofs(ofs_name.c_str());
	if (!ofs.is_open())
	{
		ifs.close();
		std::cerr << "Can't open " << ofs_name << std::endl;
		return (3);
	}

	buf << ifs.rdbuf();
	str = buf.str();
	ft_replace(str, search, replace, &ofs);
	ifs.close();
	ofs.close();
	return (1);
}
