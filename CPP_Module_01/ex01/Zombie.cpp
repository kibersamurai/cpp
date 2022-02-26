/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 20:12:45 by bprovolo          #+#    #+#             */
/*   Updated: 2022/02/26 22:20:26 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* constructor */

Zombie::Zombie(std::string name) : name(name) 
{
	std::cout << "Zombie constructor called" << std::endl;
}

/* destructor */

Zombie::~Zombie(void)
{
	std::cout << this->name << ": "
	<< "destroy\n";
}

/* Zombies announce themselves as follows */

void	Zombie::announce(void) const
{
	std::cout << this->name << ": "
	<< "BraiiiiiiinnnzzzZ...\n";
}

void 	Zombie::setName(std::string name_)
{
	name=name_;
}
