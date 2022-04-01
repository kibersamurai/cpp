/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 16:29:22 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/20 19:44:07 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor have been called\n";
	this->brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat Destructor have been called\n";
	delete this->brain;
}

Cat::Cat(const Cat & src) : Animal(src.type)
{
	std::cout << "Cat Copy constructor called\n";
	*this = src;
	this->brain = NULL;
}

Cat & Cat::operator= ( const Cat & src )
{
	std::cout << "Cat assignation operator have been called\n";
   if (this != &src)
   {
	   this->type = src.type;
	   if (this->brain)
	   		delete this->brain;
		this->brain = new Brain(*src.brain);
   }	
	return *this;
}

void Cat::makeSound()
{
	std::cout << " - MeoW\n";
}
