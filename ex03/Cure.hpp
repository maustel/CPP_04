/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 14:38:53 by maustel           #+#    #+#             */
/*   Updated: 2025/03/18 15:54:28 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_HPP__
# define __CURE_HPP__

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
	Cure();
	~Cure();
	Cure(const Cure &other);
	Cure& operator=(const Cure &other);

	AMateria* clone (void) const;
	virtual void use(ICharacter& target);
};


#endif