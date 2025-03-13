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

	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// delete j;
	// delete i;

	//----------------------------------------------------
	// test for array create, fill and delete as animals
	// ---------------------------------------------------

	// int n = 4;
	// Animal *animals[n];
	// animals[0] = new Dog();
	// animals[1] = new Dog();
	// animals[2] = new Cat();
	// animals[3] = new Cat();

	// for (int i = 0; i < n; i++)
	// 	delete animals[i];

	//---------------------------------------
	// test for deep copy
	//---------------------------------------
	Cat carlo;
	carlo.get_brain()->set_idea(0, "Catch a mouse!");
	Cat minca(carlo);
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
	Dog milco;
	milco.get_brain()->set_idea(0, "Catch a cat!");
	Dog jackie(milco);
	std::cout << "milco Brain Address: " << milco.get_brain() << std::endl;
	std::cout << "jackie Brain Address: " << jackie.get_brain() << std::endl;
	std::cout << "milco idea 0 : " << milco.get_brain()->get_idea(0) << std::endl;
	std::cout << "jackie idea 0 : " << jackie.get_brain()->get_idea(0) << std::endl;
	milco.get_brain()->set_idea(1, "Go sleeping!");
	std::cout << "milco idea 1 : " << milco.get_brain()->get_idea(1) << std::endl;
	std::cout << "jackie idea 1 : " << jackie.get_brain()->get_idea(1) << std::endl;

	return 0;
}
