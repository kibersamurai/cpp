/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 20:32:29 by bprovolo          #+#    #+#             */
/*   Updated: 2022/02/26 20:51:33 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* It creates a zombie, name it, and return it so you can use it outside of the function scope. */

Zombie* newZombie( std::string name )
{
	return (new Zombie(name));
}
