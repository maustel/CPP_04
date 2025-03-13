/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:33:48 by maustel           #+#    #+#             */
/*   Updated: 2025/03/13 14:33:48 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
Using the {} initializer syntax performs value-initialization on all array elements.
*/
Brain::Brain(): _ideas{}
{
	std::cout << "Brain default constructor." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor." << std::endl;
}

Brain::Brain(const Brain& other)
{
	*this = other;
	std::cout << "Brain copy constructor." << std::endl;
}

Brain &Brain::operator=(const Brain& other)
{
	for(int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
	return (*this);
}

void Brain::set_idea(int n, std::string idea)
{
	this->_ideas[n] = idea;
}

const std::string Brain::get_idea(int n) const
{
	return (this->_ideas[n]);
}
