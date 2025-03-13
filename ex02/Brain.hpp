/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:28:34 by maustel           #+#    #+#             */
/*   Updated: 2025/03/13 14:28:34 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP__
# define __BRAIN_HPP__

#include <iostream>
#include <string>

class Brain
{
	private:
	std::string _ideas[100];
	public:
	Brain();
	~Brain();
	Brain(const Brain& other);
	Brain& operator=(const Brain& other);
	void set_idea(int n, const std::string idea);
	const std::string get_idea(int n) const;
};

#endif
