/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:36:48 by maustel           #+#    #+#             */
/*   Updated: 2025/03/06 10:36:48 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Animal")
{
	std::cout << "Animal Default Constructor." << std::endl;
}

Animal::Animal(const std::string type)
{
	std::cout << "Animal Type Constructor set to " << type << std::endl;
	this->type = type;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor kills " << this->getType() << std::endl;
}

Animal::Animal(const Animal& other)
{
	std::cout << "Animal copy constructor." << std::endl;
	*this = other;
}

Animal &Animal::operator=(const Animal& other)
{
	this->type = other.type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "cockadoodledoo chiffchaff muuuuuuh" << std::endl;
}

const std::string Animal::getType() const
{
	return (this->type);
}
