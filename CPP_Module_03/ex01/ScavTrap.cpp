/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 20:12:07 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/13 20:28:21 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("default", 100, 50, 20)
{
	std::cout << "default ScavTrap constructor have been called\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << this->_name  << "default ScavTrap constructor have been called\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << this->_name << ": Destructor ScavTrap have been called\n";
}

ScavTrap::ScavTrap(const ScavTrap & src) 
{
	std::cout << "Copy constructor ScavTrap called\n";
	*this = src;
}
	
ScavTrap & ScavTrap::operator= ( const ScavTrap & src )
{
	this->hitPoint = src.hitPoint;
	this->_name = src._name;
	this->energyPoint = src.energyPoint;
	this->attackDamage = src.attackDamage;
	std::cout << this->_name << ": assignation operator ScavTrap have been called\n";
	return *this;
}

void ScavTrap::guardGate ( void )
{
	std::cout << this->_name << ": ScavTrap has entered in Gate keeper mode\n";
}