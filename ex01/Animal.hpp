/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:24:21 by maustel           #+#    #+#             */
/*   Updated: 2025/03/06 10:24:21 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

#include <iostream>

class Animal
{
	protected:
	std::string type;
	public:
	Animal();
	Animal(const std::string type);
	virtual ~Animal();
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);

	virtual void	makeSound() const;
	const std::string getType() const;
};

#endif
