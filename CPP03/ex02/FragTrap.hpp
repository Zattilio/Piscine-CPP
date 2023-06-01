/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:03:28 by jlanza            #+#    #+#             */
/*   Updated: 2023/06/01 15:05:32 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
# define FragTrap_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

private:
	FragTrap(void);

public:
	FragTrap(std::string name);
	~FragTrap();

	FragTrap(FragTrap const & src);
	FragTrap & operator=(FragTrap const & rhs);

	void	highFivesGuys(void);
};

#endif
