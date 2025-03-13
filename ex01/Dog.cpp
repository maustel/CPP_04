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
	this->_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog Destructor." << std::endl;
	delete this->_brain;
}

Dog::Dog(const Dog& other): Animal(other)
{
	std::cout << "Dog copy constructor." << std::endl;
	*this = other;
}

Dog &Dog::operator=(const Dog& other)
{
	this->type = other.type;
	this->_brain = new Brain();
	*this->_brain = *other._brain;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Wuff Wuff!" << std::endl;
}

Brain *Dog::get_brain()
{
	return (this->_brain);
}
