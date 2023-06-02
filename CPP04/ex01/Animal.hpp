/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 04:01:25 by jlanza            #+#    #+#             */
/*   Updated: 2023/06/02 06:14:28 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{

protected:
	std::string type;

public:
	Animal(void);
	virtual ~Animal();

	Animal(Animal const & src);
	Animal & operator=(Animal const & rhs);

	virtual void		makeSound(void) const;
	virtual std::string	getType(void) const;
};

#endif
