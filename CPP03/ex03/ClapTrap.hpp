/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:13:53 by jlanza            #+#    #+#             */
/*   Updated: 2023/06/02 03:27:28 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{

protected:
	std::string	_name;
	int			_hit_points;
	int			_energy_points;
	int			_attack_damage;

	ClapTrap(void);

public:

	ClapTrap(std::string name);
	~ClapTrap();

	ClapTrap(ClapTrap const & src);
	ClapTrap & operator=(ClapTrap const & rhs);

	void	attack(const std::string & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif
