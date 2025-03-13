/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:24:21 by maustel           #+#    #+#             */
/*   Updated: 2025/03/06 10:24:21 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AANIMAL_HPP__
# define __AANIMAL_HPP__

#include <iostream>

class AAnimal
{
	protected:
	std::string type;
	public:
	AAnimal();
	AAnimal(const std::string type);
	virtual ~AAnimal();
	AAnimal(const AAnimal& other);
	AAnimal& operator=(const AAnimal& other);

	virtual void	makeSound() const = 0;
	const std::string getType() const;
};

#endif
