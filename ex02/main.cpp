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

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

/*
	exercise is about abstract classes
	default Animal class should not be instantiable
	abstract class should have prefix A -> AAnimal
	transform class to abstract by setting member function to:
	virtual void	makeSound() const = 0;
	-> we have no definition of this method
	-> missing behaviour = abstract
	-> children classes must have the behaviour

	abstract class: can have both: methods with and without behaviour and also attributes
	interface = abstract behaviour only = pure abstract class
*/
int main()
{
	//-------------------------------------------
	// test from ex00
	//--------------------------------------------
	// const AAnimal* meta = new AAnimal(); // object of abstract class type "AAnimal" is not allowed
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	delete j;
	delete i;

	//-------------------------------------------
	// tests from ex01
	//-------------------------------------------
	//-------------------------------------
	// test from subject
	//.....................................

	// const AAnimal* j = new Dog();
	// const AAnimal* i = new Cat();

	// delete j;
	// delete i;

	//----------------------------------------------------
	// test for array create, fill and delete as Aanimals
	// ---------------------------------------------------

	// int n = 4;
	// AAnimal *animals[n];
	// animals[0] = new Dog();
	// animals[1] = new Dog();
	// animals[2] = new Cat();
	// animals[3] = new Cat();

	// for (int i = 0; i < n; i++)
	// 	delete animals[i];

	//---------------------------------------
	// test for deep copy
	//---------------------------------------
	// Cat carlo;
	// carlo.get_brain()->set_idea(0, "Catch a mouse!");
	// Cat minca(carlo);
	// std::cout << "carlos Brain Address: " << carlo.get_brain() << std::endl;
	// std::cout << "mincas Brain Address: " << minca.get_brain() << std::endl;
	// std::cout << "carlos idea 0 : " << carlo.get_brain()->get_idea(0) << std::endl;
	// std::cout << "mincas idea 0 : " << minca.get_brain()->get_idea(0) << std::endl;
	// carlo.get_brain()->set_idea(1, "Go sleeping!");
	// std::cout << "carlos idea 1 : " << carlo.get_brain()->get_idea(1) << std::endl;
	// std::cout << "mincas idea 1 : " << minca.get_brain()->get_idea(1) << std::endl;
	// minca.makeSound();
	// carlo.makeSound();

	//---------------------------------------
	// test for deep copy -> same thing with dog
	//---------------------------------------
	// Dog milco;
	// milco.get_brain()->set_idea(0, "Catch a cat!");
	// Dog jackie(milco);
	// std::cout << "milco Brain Address: " << milco.get_brain() << std::endl;
	// std::cout << "jackie Brain Address: " << jackie.get_brain() << std::endl;
	// std::cout << "milco idea 0 : " << milco.get_brain()->get_idea(0) << std::endl;
	// std::cout << "jackie idea 0 : " << jackie.get_brain()->get_idea(0) << std::endl;
	// milco.get_brain()->set_idea(1, "Go sleeping!");
	// std::cout << "milco idea 1 : " << milco.get_brain()->get_idea(1) << std::endl;
	// std::cout << "jackie idea 1 : " << jackie.get_brain()->get_idea(1) << std::endl;

	return 0;
}
