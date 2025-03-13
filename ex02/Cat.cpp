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

Cat::Cat(): AAnimal("Cat")
{
	std::cout << "Cat Default Constructor." << std::endl;
	this->_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat Destructor." << std::endl;
	delete this->_brain;
}

Cat::Cat(const Cat& other): AAnimal(other)
{
	std::cout << "Cat copy constructor." << std::endl;
	*this = other;
}

/*
wrong: this->_brain = other._brain; -> would make shallow copy (both addresses identical)
which would lead to double free and if I change value of this->brain also other.brain is changed
*/
Cat &Cat::operator=(const Cat& other)
{
	this->type = other.type;
	this->_brain = new Brain();
	*this->_brain = *other._brain;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miauuuuuuuu!" << std::endl;
}

Brain *Cat::get_brain() const
{
	return (this->_brain);
}
