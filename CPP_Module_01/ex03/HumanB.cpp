/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:14:02 by bprovolo          #+#    #+#             */
/*   Updated: 2022/02/27 20:26:11 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name): _name(name)
{
	_weapon = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::attack(void)
{
	std::cout << _name << " attacks with their " << _weapon->getType()
	<< std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}
