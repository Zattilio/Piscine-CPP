/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 04:25:47 by jlanza            #+#    #+#             */
/*   Updated: 2023/06/02 06:12:28 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main(void)
{

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	Animal *tab[4];
	tab[0] = new Dog;
	tab[1] = new Dog;
	tab[2] = new Cat;
	tab[3] = new Cat;

	for (int iterator = 0; iterator < 4; iterator++)
	{
		delete tab[iterator];
	}

	Dog	dog1;
	dog1.setBrainIndex(0, "food");
	Dog	dog2(dog1);
	if (dog1.getBrainIndex(0) == dog2.getBrainIndex(0))
		std::cout << "ok1" << std::endl;
	else
		std::cout << "KO1" << std::endl;
	if (&dog1 != &dog2)
		std::cout << "ok2" << std::endl;
	else
		std::cout << "KO2" << std::endl;
	return 0;
}
