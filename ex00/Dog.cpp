/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:55:09 by maustel           #+#    #+#             */
/*   Updated: 2025/03/06 10:55:09 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog Default Constructor." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor." << std::endl;
}

Dog::Dog(const Dog& other): Animal(other)
{
	std::cout << "Dog copy constructor." << std::endl;
}

Dog &Dog::operator=(const Dog& other)
{
	this->type = other.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Wuff Wuff!" << std::endl;
}
