/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:03:28 by jlanza            #+#    #+#             */
/*   Updated: 2023/06/01 15:05:10 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

private:
	ScavTrap(void);

public:
	ScavTrap(std::string name);
	~ScavTrap();

	ScavTrap(ScavTrap const & src);
	ScavTrap & operator=(ScavTrap const & rhs);

	void	attack(const std::string & target);
	void	guardGate(void);
};

#endif
