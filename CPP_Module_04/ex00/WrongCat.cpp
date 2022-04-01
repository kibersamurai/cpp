/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:42:38 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/20 20:00:56 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") 
{
	std::cout << "WrongCat constructor have been called" << std::endl;
}

WrongCat::~WrongCat() 
{
	std::cout << "WrongCat destructor have been called" << std::endl;
}

WrongCat::WrongCat( const WrongCat & src ) : WrongAnimal(src.type) 
{
	std::cout << "WrongCat copy constructor have been called" << std::endl;
}

WrongCat & WrongCat::operator= ( const WrongCat & src ) 
{
	this->type = src.type;
	std::cout << "WrongCat assignation operator have been called" << std::endl;
	return *this;
}

void WrongCat::makeSound()
{
    std::cout << "- [WrongCat sound]" << std::endl;
}
