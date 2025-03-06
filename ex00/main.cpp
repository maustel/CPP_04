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
Exercise is about polymorphism: The base class pointer can point to derived class objects
When I do Animal* i = new Cat();
i->makeSound();
And member functions are NOT set virtual -> compiler will go to first function with
that name it finds (makeSound) -> from animal
but if member function is set virtual (= "method"), function call will be dynamic,
which means that it will be made during execution and it will search for the actual type.

Animal makeSound() is virtual -> cat.makeSound(): "Miaooo"
WrongAnimal makeSound() is NOT virtual -> cat.makeSound(): animal sound

virtual is also important for baseclass destructor. Otherwise it will be only called the
base class destructor when you delete through a base class pointer.
*/
int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	//makeSound() is not set virtual, will find base class implementation of that function
	const WrongAnimal* w = new WrongCat();
	std::cout << w->getType() << " " << std::endl;
	w->makeSound();
	std::cout << std::endl;

	// //since its not polymorphism here, makeSound() will be found on class WrongCat
	// WrongCat wcat;
	// std::cout << wcat.getType() << " " << std::endl;
	// wcat.makeSound();
	// std::cout << std::endl;

	delete i;
	delete j;
	delete meta;
	std::cout << std::endl;
	//destructor is not set to virtual, so it will be called only base class destructor
	delete w;
	std::cout << std::endl;

	return 0;
}
