/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 05:00:43 by jlanza            #+#    #+#             */
/*   Updated: 2023/06/02 05:20:12 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
public:
	Brain();
	~Brain();

	Brain(Brain const & src);
	Brain & operator=(Brain const & rhs);

	std::string	ideas[100];
};

#endif
