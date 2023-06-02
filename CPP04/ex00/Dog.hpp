/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 04:09:49 by jlanza            #+#    #+#             */
/*   Updated: 2023/06/02 04:38:59 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog(void);
	~Dog(void);

	Dog(Dog const & src);
	Dog & operator=(Dog const & rhs);

	void	makeSound(void) const;
};

#endif
