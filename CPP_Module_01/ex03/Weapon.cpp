/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 16:58:43 by bprovolo          #+#    #+#             */
/*   Updated: 2022/02/27 19:48:02 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::~Weapon(void)
{
}

/* returns a const reference to type */
std::string const &Weapon::getType(void) const
{
	return (this->_type);
}

/* устанавливает тип, используя новый тип, 	*/
/* переданный в качестве параметра 			*/
void Weapon::setType( std::string type )
{
	this->_type = type;
}
