/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 14:40:02 by maustel           #+#    #+#             */
/*   Updated: 2025/03/18 15:20:08 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "[Ice] default constructor" << std::endl;
	this->_type = "ice";
}

Ice::~Ice()
{
	std::cout << "[Ice] destructor" << std::endl;
}

Ice::Ice(const Ice &other)
{
	std::cout << "[Ice] copy constructor" << std::endl;
	*this = other;
}

Ice& Ice::operator=(const Ice &other)
{
	std::cout << "[Ice] assign operator" << std::endl;
	this->_type = other._type;
	return (*this);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const
{
	std::cout << "[Ice] creates a clone." << std::endl;
	AMateria *Mat = new Ice(*this);
	return (Mat);
}
