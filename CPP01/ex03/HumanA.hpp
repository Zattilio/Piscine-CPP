/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:31:15 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/25 13:08:21 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "./Weapon.hpp"

class	HumanA
{
private:

	std::string		_name;
	Weapon			&_weapon;

public:

	HumanA(std::string name, Weapon & weapon) ;
	~HumanA();

	void	attack();

};

#endif
