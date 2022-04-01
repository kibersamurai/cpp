/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:10:36 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/20 17:15:41 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog constructor have been called\n";
}

Dog::~Dog()
{
	std::cout << "Dog Destructor have been called\n";
}

Dog::Dog(const Dog & src) : Animal(src.type)
{
	std::cout << "Dog Copy constructor called\n";
	*this = src;
}

Dog & Dog::operator= ( const Dog & src )
{
    this->type = src.type;
	std::cout << "Dog assignation operator have been called\n";
	return *this;
}

void Dog::makeSound()
{
	std::cout << "- Woof-woof\n";
}
