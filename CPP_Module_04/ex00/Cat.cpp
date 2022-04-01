/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 16:29:22 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/20 16:54:51 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor have been called\n";
}

Cat::~Cat()
{
	std::cout << "Cat Destructor have been called\n";
}

Cat::Cat(const Cat & src) : Animal(src.type)
{
	std::cout << "Cat Copy constructor called\n";
	*this = src;
}

Cat & Cat::operator= ( const Cat & src )
{
    this->type = src.type;
	std::cout << "Cat assignation operator have been called\n";
	return *this;
}

void Cat::makeSound()
{
	std::cout << "- MeoW\n";
}
