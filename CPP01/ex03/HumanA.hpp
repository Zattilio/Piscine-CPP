/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:31:15 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/22 18:32:45 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "./Weapon.hpp"

class	HumanA
{
private:

	std::string		_name;
	Weapon			_weapon;

public:

	HumanA(std::string const & name, Weapon const & weapon) : _name(name), _weapon(weapon)
	{
	}
	~HumanA();

	void	attack();

};

#endif
