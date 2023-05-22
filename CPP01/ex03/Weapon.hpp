/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:15:59 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/22 17:55:45 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{

private:

	std::string type;

public:

	Weapon();
	Weapon(std::string type);
	~Weapon();
	const std::string	&getType() const;
	void				setType(std::string type);
};

#endif
