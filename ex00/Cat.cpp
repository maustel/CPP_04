/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:46:12 by maustel           #+#    #+#             */
/*   Updated: 2025/03/06 10:46:12 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat Default Constructor." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor." << std::endl;
}

Cat::Cat(const Cat& other): Animal(other)
{
	std::cout << "Cat copy constructor." << std::endl;
}

Cat &Cat::operator=(const Cat& other)
{
	this->type = other.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miauuuuuuuu!" << std::endl;
}

