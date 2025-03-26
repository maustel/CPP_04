/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:24:03 by maustel           #+#    #+#             */
/*   Updated: 2025/03/06 10:24:03 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "colors.h"

/*
	deleting Dog and Cat
	-> virtual is important for baseclass destructor. Otherwise it will be only called the
	base class destructor (animal) when you delete through a base class pointer.

	Shallow copy creates shared pointers to the same memory.
	->this means, if I change Brain copy, also copied Brain will be changed
	and it will do double free
	Deep copy creates independent copies of all resources.
*/
int main()
{
	//-------------------------------------
	// test from subject
	//.....................................
	std::cout << MAG << "[---------- test from subject ----------]" << RESET << std::endl;
	std::cout << YEL << "[---------- new Dog ----------]" << RESET << std::endl;
	const Animal* j = new Dog();
	std::cout << YEL << "[---------- new Cat ----------]" << RESET << std::endl;
	const Animal* i = new Cat();

	std::cout << YEL << "[---------- delete Dog ----------]" << RESET << std::endl;
	delete j;
	std::cout << YEL << "[---------- delete Cat ----------]" << RESET << std::endl;
	delete i;

	//----------------------------------------------------
	// test for array create, fill and delete as animals
	// ---------------------------------------------------
	std::cout << MAG << "[---------- test for array create, fill and delete as animals ----------]" << RESET << std::endl;

	int n = 4;
	std::cout << YEL << "[---------- create animal array ----------]" << RESET << std::endl;
	Animal *animals[n];
	std::cout << std::endl;
	for(int i = 0; i < n; i++)
	{
		if (i % 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << std::endl;
	}

	std::cout << YEL << "[---------- delete animal array ----------]" << RESET << std::endl;
	for (int i = 0; i < n; i++)
	{
		delete animals[i];
		std::cout << std::endl;

	}

	//---------------------------------------
	// test for deep copy
	//---------------------------------------
	std::cout << MAG << "[---------- tests for deep copy ----------]" << RESET << std::endl;

	Cat carlo;
	std::cout << std::endl;

	carlo.get_brain()->set_idea(0, "Catch a mouse!");
	Cat minca(carlo);
	std::cout << std::endl;

	std::cout << "carlos Brain Address: " << carlo.get_brain() << std::endl;
	std::cout << "mincas Brain Address: " << minca.get_brain() << std::endl;
	std::cout << "carlos idea 0 : " << carlo.get_brain()->get_idea(0) << std::endl;
	std::cout << "mincas idea 0 : " << minca.get_brain()->get_idea(0) << std::endl;
	carlo.get_brain()->set_idea(1, "Go sleeping!");
	std::cout << "carlos idea 1 : " << carlo.get_brain()->get_idea(1) << std::endl;
	std::cout << "mincas idea 1 : " << minca.get_brain()->get_idea(1) << std::endl;

	//---------------------------------------
	// test for deep copy -> same thing with dog
	//---------------------------------------
	std::cout << MAG << "[---------- tests for deep copy -> same thing with dog ----------]" << RESET << std::endl;

	Dog milco;
	std::cout << std::endl;

	milco.get_brain()->set_idea(0, "Catch a cat!");
	Dog jackie(milco);
	std::cout << std::endl;

	std::cout << "milco Brain Address: " << milco.get_brain() << std::endl;
	std::cout << "jackie Brain Address: " << jackie.get_brain() << std::endl;
	std::cout << "milco idea 0 : " << milco.get_brain()->get_idea(0) << std::endl;
	std::cout << "jackie idea 0 : " << jackie.get_brain()->get_idea(0) << std::endl;
	milco.get_brain()->set_idea(1, "Go sleeping!");
	std::cout << "milco idea 1 : " << milco.get_brain()->get_idea(1) << std::endl;
	std::cout << "jackie idea 1 : " << jackie.get_brain()->get_idea(1) << std::endl;

	std::cout << MAG << "[---------- Destructors ----------]" << RESET << std::endl;
	return 0;
}
