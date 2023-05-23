/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:45:59 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/23 14:46:00 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "./Weapon.hpp"

class	HumanB
{

private:

	Weapon			*_weapon;
	std::string		_name;

public:

	HumanB(std::string name);
	~HumanB();

	void	setWeapon(Weapon & weapon);
	void	attack();


};

#endif
