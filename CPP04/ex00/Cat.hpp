/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 04:22:02 by jlanza            #+#    #+#             */
/*   Updated: 2023/06/02 04:38:44 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat(void);
	~Cat(void);

	Cat(Cat const & src);
	Cat & operator=(Cat const & rhs);

	void	makeSound(void) const;
};

#endif
