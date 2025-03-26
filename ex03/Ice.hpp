/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 14:25:30 by maustel           #+#    #+#             */
/*   Updated: 2025/03/18 15:19:44 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_HPP__
# define __ICE_HPP__

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice: public AMateria
{
	public:
	Ice();
	~Ice();
	Ice(const Ice &other);
	Ice& operator=(const Ice &other);

	AMateria* clone (void) const;
	void use(ICharacter& target);
};


#endif