/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:18:08 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/20 20:00:46 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal() : type("default")
{
	std::cout << "WrongAnimal Default constructor have been called\n";
}

WrongAnimal::WrongAnimal( std::string _type ) : type(_type) {
	std::cout << "WrongAnimal constructor have been called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor have been called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal & src) : type(src.type)
{
	std::cout << "WrongAnimal Copy constructor called\n";
}

WrongAnimal & WrongAnimal::operator= ( const WrongAnimal & src )
{
    this->type = src.type;
	std::cout << "WrongAnimal assignation operator have been called\n";
	return *this;
}

void WrongAnimal::makeSound()
{
	std::cout << "- [WrongAnimal sound]\n";
}
