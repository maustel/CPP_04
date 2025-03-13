/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 11:42:22 by maustel           #+#    #+#             */
/*   Updated: 2025/03/06 11:42:22 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Default Constructor." << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type)
{
	std::cout << "WrongAnimal Type Constructor set to " << type << std::endl;
	this->type = type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor kills " << this->type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "WrongAnimal copy constructor." << std::endl;
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& other)
{
	this->type = other.type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "cockadoodledoo chiffchaff muuuuuuh" << std::endl;
}

const std::string WrongAnimal::getType() const
{
	return (this->type);
}
