/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:15:59 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/15 17:01:57 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon
{

private:

	std::string _type;

public:

	Weapon(/* args */);
	~Weapon();
	const std::string	&getType() const;
	void				setType(std::string type);
};
