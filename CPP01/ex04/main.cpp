/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:51:08 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/23 18:05:16 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

void	ft_replace(std::string & str, std::string const search, std::string const replace)
{
	int	pos;

	while (str.find(search) != std::string::npos)
	{
		pos = str.find(search);
		str.erase(pos, search.size());
		str.insert(pos, replace);
	}
}

int	main(int argc, char *argv[])
{
	std::string			ofs_name;
	std::ostringstream	buf;
	std::string			str;
	std::string			search(argv[2]);
	std::string			replace(argv[3]);

	if (argc != 4 || !argv[1][0] || !argv[2][0])
	{
		std::cerr << "Arguments invalid" << std::endl;
		return (1);
	}

	std::ifstream	ifs(argv[1]);
	if (!ifs.is_open())
	{
		std::cerr << "Can't open " << argv[1] << std::endl;
		return (2);
	}
	ofs_name = (std::string)argv[1] + ".replace";
	std::ofstream	ofs(ofs_name.c_str());
	if (!ofs.is_open())
	{
		ifs.close();
		std::cerr << "Can't open " << ofs_name << std::endl;
		return (3);
	}

	buf << ifs.rdbuf();
	str = buf.str();
	ft_replace(str, search, replace);
	ofs << str;
	ifs.close();
	ofs.close();
	return (1);
}
