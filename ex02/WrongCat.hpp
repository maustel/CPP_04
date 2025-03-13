/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 11:43:38 by maustel           #+#    #+#             */
/*   Updated: 2025/03/06 11:43:38 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __WRONGCAT_HPP__
# define __WRONGCAT_HPP__

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat& other);
	WrongCat& operator=(const WrongCat& other);

	void makeSound() const;
};

#endif
