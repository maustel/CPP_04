/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 11:44:38 by maustel           #+#    #+#             */
/*   Updated: 2025/03/06 11:44:38 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Default Constructor." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor." << std::endl;
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal(other)
{
	std::cout << "WrongCat copy constructor." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat& other)
{
	this->type = other.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Miauuuuuuuu!" << std::endl;
}
