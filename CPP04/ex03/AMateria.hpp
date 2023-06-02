/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 06:30:18 by jlanza            #+#    #+#             */
/*   Updated: 2023/06/02 06:35:39 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
private:
	AMateria();

protected:
	/*data*/

public:
	AMateria(std::string const & type);
	virtual ~AMateria();

	AMateria(AMateria const & src);
	AMateria & operator=(AMateria const & rhs);

	std::string const & getType() const; //Returns the materia type

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

std::ostream & operator<<(std::ostream & os, AMateria const & instance);

#endif
