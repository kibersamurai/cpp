/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 12:23:30 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/20 12:53:55 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Default constructor have been called\n";
}

Animal::~Animal()
{
	std::cout << "Animal Destructor have been called\n";
}

Animal::Animal(const Animal & src) 
{
	std::cout << "Animal Copy constructor called\n";
	*this = src;
}

Animal & Animal::operator= ( const Animal & src )
{
    this->type = src.type;
	std::cout << "Animal assignation operator have been called\n";
	return *this;
}
