/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:43:26 by maustel           #+#    #+#             */
/*   Updated: 2025/03/06 10:43:26 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
# define __CAT_HPP__

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	private:
	Brain *_brain;
	public:
	Cat();
	~Cat();
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);
	Brain* get_brain() const;

	virtual void makeSound() const;
};

#endif
