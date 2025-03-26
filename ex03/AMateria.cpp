/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 14:10:17 by maustel           #+#    #+#             */
/*   Updated: 2025/03/18 15:51:31 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria():_type("")
{
	std::cout << "[AMateria] default constructor" << std::endl;
}

AMateria::AMateria(const std::__1::string &type): _type(type)
{
	std::cout << "[AMateria] [std::string const&] constructor" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "[AMateria] destructor" << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
	std::cout << "[AMateria] copy constructor" << std::endl;
	*this = other;
}

/*
Assigning type core to ice type does not make sense, therefore it shows an error message in that case
*/
AMateria& AMateria::operator=(const AMateria &other)
{
	if (this->_type != other._type)
		std::cerr << "Error: you are trying to assign a " << this->_type << " to a " << other._type << "assignment NOT performed" << std::endl;
	return (*this);
}

const std::__1::string &AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "AMateria is used" << std::endl;
}