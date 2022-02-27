/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 20:12:45 by bprovolo          #+#    #+#             */
/*   Updated: 2022/02/27 15:11:11 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* constructor */

Zombie::Zombie(std::string _name) : name(_name) 
{
	std::cout << "Zombie constructor called" << std::endl;
}

Zombie::Zombie() : name("untitled")
{
	
}


/* destructor */

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << name << ": "
	<< "destroy\n";
}

/* Zombies announce themselves as follows */

void	Zombie::announce(void)
{
	std::cout << name << ": "
	<< "BraiiiiiiinnnzzzZ...\n";
}

void 	Zombie::setName(std::string _name)
{
	name=_name;
}
