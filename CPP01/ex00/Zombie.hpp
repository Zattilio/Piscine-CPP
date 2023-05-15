/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:48:26 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/15 15:38:58 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{

private:

	std::string	name;

public:

	Zombie();
	~Zombie();
	std::string	get_name(void) const;
	void		set_name(std::string name);
	void		announce(void) const;
};


Zombie*		newZombie( std::string name );
void		randomChump( std::string name );