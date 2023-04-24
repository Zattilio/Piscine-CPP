/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:26:06 by jlanza            #+#    #+#             */
/*   Updated: 2023/04/24 16:55:38 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class	Contact {

public:

	char	first_name[512];
	char	last_name[512];
	char	nickname[512];
	char	phone_number[512];
	char	darkest_secret[512];

	Contact(void);
	~Contact(void);
};

#endif
