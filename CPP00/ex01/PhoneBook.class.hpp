/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:33:55 by jlanza            #+#    #+#             */
/*   Updated: 2023/04/25 17:57:55 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.hpp"
# include <iostream>

class	PhoneBook {

public:

	Contact	contact[8];

	PhoneBook(void);
	~PhoneBook(void);

	int		add(void);
	void	search(void);

private:
	int		index;
	int		get_index(void) const;
};

#endif
