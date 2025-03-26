/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:52:25 by maustel           #+#    #+#             */
/*   Updated: 2025/03/18 15:53:32 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "[Cure] default constructor" << std::endl;
	this->_type = "Cure";
}

Cure::~Cure()
{
	std::cout << "[Cure] destructor" << std::endl;
}

Cure::Cure(const Cure &other)
{
	std::cout << "[Cure] copy constructor" << std::endl;
	*this = other;
}

Cure& Cure::operator=(const Cure &other)
{
	std::cout << "[Cure] assign operator" << std::endl;
	this->_type = other._type;
	return (*this);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
	std::cout << "[Cure] creates a clone." << std::endl;
	AMateria *Mat = new Cure(*this);
	return (Mat);
}
