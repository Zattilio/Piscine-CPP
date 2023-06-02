/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 04:22:02 by jlanza            #+#    #+#             */
/*   Updated: 2023/06/02 05:50:08 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*brain;

public:
	Cat(void);
	~Cat(void);

	Cat(Cat const & src);
	Cat & operator=(Cat const & rhs);

	void		makeSound(void) const;
	void		setBrainIndex(const int i, std::string str);
	std::string	getBrainIndex(const int i) const;
};

#endif
