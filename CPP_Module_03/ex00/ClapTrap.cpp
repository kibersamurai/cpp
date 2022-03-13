/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 16:10:42 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/13 19:35:58 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), hitPoint(10), energyPoint(10), attackDamage(0)
{
	std::cout << "Default constructor have been called\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor have been called\n";
}

ClapTrap::ClapTrap(const ClapTrap & src) 
{
	std::cout << "Copy constructor called\n";
	*this = src;
}
	
ClapTrap & ClapTrap::operator= ( const ClapTrap & src )
{
	this->hitPoint = src.hitPoint;
	this->_name = src._name;
	this->energyPoint = src.energyPoint;
	this->attackDamage = src.attackDamage;
	std::cout << this->_name << ": assignation operator have been called\n";
	return *this;
}
	
ClapTrap::ClapTrap(std::string name)  : _name(name), hitPoint(10), energyPoint(10), attackDamage(0)
{
	std::cout << _name << ": constructor have been called\n";
}

void ClapTrap::attack(const std::string& target)
{
	std::cout << this->_name << " attacks " << target << ", causing " 
	<< attackDamage << " points of damage\n";
	this->energyPoint--;
	
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hitPoint -= amount;
	if (this->hitPoint < 0)
		this->hitPoint = 0;
	std::cout << this->_name << " takes " << amount << " points of damage!\n";	
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->hitPoint += amount;
	std::cout << "Repaire: hit point " << this->_name << " + " << amount << " points!\n";	
	this->energyPoint--;	
}

/* сеттеры */
void ClapTrap::setDamage( int damage ) {
    this->attackDamage = damage;
}

/* геттеры */
int ClapTrap::getHealth( void ) const {
    return this->hitPoint;
}

std::string ClapTrap::getName( void ) const {
    return this->_name;
}

int ClapTrap::getEnergy( void ) const {
    return this->energyPoint;
}
