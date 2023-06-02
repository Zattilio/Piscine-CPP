/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 04:09:49 by jlanza            #+#    #+#             */
/*   Updated: 2023/06/02 05:58:58 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *brain;

public:
	Dog(void);
	~Dog(void);

	Dog(Dog const & src);
	Dog & operator=(Dog const & rhs);

	void		makeSound(void) const;
	void		setBrainIndex(const int i, std::string str);
	std::string	getBrainIndex(const int i) const;
};

#endif
