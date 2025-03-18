/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 14:01:42 by maustel           #+#    #+#             */
/*   Updated: 2025/03/18 15:25:34 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_HPP__
# define __AMATERIA_HPP_

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	protected:
	std::string _type;

	public:
	AMateria(std::string const & type);
	AMateria();
	virtual ~AMateria();
	AMateria(const AMateria &other);
	AMateria& operator=(const AMateria &other);

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif