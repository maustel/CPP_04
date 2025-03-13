/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 11:39:59 by maustel           #+#    #+#             */
/*   Updated: 2025/03/06 11:39:59 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_HPP__
# define __WRONGANIMAL_HPP__

#include <iostream>

class WrongAnimal
{
	protected:
	std::string type;
	public:
	WrongAnimal();
	WrongAnimal(const std::string type);
	~WrongAnimal();
	WrongAnimal(const WrongAnimal& other);
	WrongAnimal& operator=(const WrongAnimal& other);

	void	makeSound() const;
	const std::string getType() const;
};

#endif
