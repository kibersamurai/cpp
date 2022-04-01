/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp  	                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:18:08 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/20 17:48:58 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain()
{
	std::cout << "Brain Default constructor have been called\n";
}

Brain::~Brain()
{
	std::cout << "Brain Destructor have been called\n";
}

Brain::Brain(const Brain & src)
{
	std::cout << "Brain Copy constructor called\n";
	*this = src;
}

Brain & Brain::operator= ( const Brain & src )
{
   	std::cout << "Brain assignation operator have been called\n";
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = src.ideas[i];
	}
	return *this;
}


