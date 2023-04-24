/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:33:55 by jlanza            #+#    #+#             */
/*   Updated: 2023/04/24 17:04:40 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.hpp"

class	PhoneBook {

public:

	Contact contact[8];

	PhoneBook(void);
	~PhoneBook(void);

	void	add(void);
	void	search(void);
	void	exit(void);
};

#endif
