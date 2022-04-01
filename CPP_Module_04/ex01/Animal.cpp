/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 12:23:30 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/20 20:14:48 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("default")
{
	std::cout << "Animal Default constructor have been called\n";
}

Animal::Animal( std::string _type ) : type(_type) {
	std::cout << "Animal constructor have been called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor have been called\n";
}

Animal::Animal(const Animal & src) : type(src.type)
{
	std::cout << "Animal Copy constructor called\n";
}

Animal & Animal::operator= ( const Animal & src )
{
	std::cout << "Animal assignation operator have been called\n";
	if (this != &src)
		this->type = src.type;
	return *this;
}

void Animal::makeSound()
{
	std::cout << " - [Animal sound]\n";
}

std::string Animal::getType() const {
    return (type);
}

void Animal::setType(std::string type) {
    this->type = type;
}