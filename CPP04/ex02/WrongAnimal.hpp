/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 04:01:25 by jlanza            #+#    #+#             */
/*   Updated: 2023/06/02 04:40:36 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

# include <iostream>

class WrongAnimal
{

protected:
	std::string type;

public:
	WrongAnimal(void);
	virtual ~WrongAnimal();

	WrongAnimal(WrongAnimal const & src);
	WrongAnimal & operator=(WrongAnimal const & rhs);

	void		makeSound(void) const;
	virtual std::string	getType(void) const;
};

#endif
