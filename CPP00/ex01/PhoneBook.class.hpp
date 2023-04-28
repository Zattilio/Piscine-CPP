/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:33:55 by jlanza            #+#    #+#             */
/*   Updated: 2023/04/28 18:51:20 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.hpp"
# include <iostream>

class	PhoneBook {

public:

	PhoneBook(void);
	~PhoneBook(void);

	int		add(void);
	void	search(void);

	int		get_index(void) const;
	void	select_contact(std::string contact_index) const;

private:
	int		_index;
	int		_number_of_contact;
	Contact	_contact[8];
};

#endif
