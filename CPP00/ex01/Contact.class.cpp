/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:50:44 by jlanza            #+#    #+#             */
/*   Updated: 2023/04/24 17:01:16 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void)
{
	this->first_name[0] = 0;
	this->last_name[0] = 0;
	this->nickname[0] = 0;
	this->phone_number[0] = 0;
	this->darkest_secret[0] = 0;
	return;
}

Contact::~Contact (void)
{
	return;
}
