/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 20:30:39 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/16 20:54:50 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("default", 100, 50, 20)
{
	std::cout << "default FragTrap constructor have been called\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << this->_name  << " FragTrap constructor have been called\n";
}

FragTrap::~FragTrap()
{
	std::cout << this->_name << ": Destructor FragTrap have been called\n";
}

FragTrap::FragTrap(const FragTrap & src) : ClapTrap(src._name, src.hitPoint, src.energyPoint, src.attackDamage)
{
	std::cout << " Copy constructor FragTrap called\n";
	*this = src;
}
	
FragTrap & FragTrap::operator= ( const FragTrap & src )
{
	this->hitPoint = src.hitPoint;
	this->_name = src._name;
	this->energyPoint = src.energyPoint;
	this->attackDamage = src.attackDamage;
	std::cout << this->_name << ": assignation operator FragTrap have been called\n";
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << std::endl;
    std::cout << this->_name << ": gives High Five!\n";
	std::cout << std::endl;
}

void FragTrap::attack(std::string const & target) {
	std::cout << this->_name << " attacks " << target << " like a FragTrap, causing ";
	std::cout << this->attackDamage << " points of damage!" << std::endl;
}
