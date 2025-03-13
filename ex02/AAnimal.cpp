/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:36:48 by maustel           #+#    #+#             */
/*   Updated: 2025/03/06 10:36:48 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(): type("AAnimal")
{
	std::cout << "AAnimal Default Constructor." << std::endl;
}

AAnimal::AAnimal(const std::string type)
{
	std::cout << "AAnimal Type Constructor set to " << type << std::endl;
	this->type = type;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor kills " << this->getType() << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
	std::cout << "AAnimal copy constructor." << std::endl;
	*this = other;
}

AAnimal &AAnimal::operator=(const AAnimal& other)
{
	this->type = other.type;
	return (*this);
}

// void	AAnimal::makeSound() const
// {
// 	std::cout << "cockadoodledoo chiffchaff muuuuuuh" << std::endl;
// }

const std::string AAnimal::getType() const
{
	return (this->type);
}
