/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:10:36 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/20 19:44:02 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog constructor have been called\n";
	this->brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog Destructor have been called\n";
	delete this->brain;
}

Dog::Dog(const Dog & src)
{
	std::cout << "Dog Copy constructor called\n";
	this->brain = NULL;
	*this = src;
}

Dog & Dog::operator= ( const Dog & src )
{
	std::cout << "Dog assignation operator have been called\n";
	if (this != &src)
	{
		this->type = src.type;
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*src.brain);
	}
	return *this;
}

void Dog::makeSound()
{
	std::cout << " - Woof-woof\n";
}
