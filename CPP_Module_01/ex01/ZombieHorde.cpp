/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 21:58:54 by bprovolo          #+#    #+#             */
/*   Updated: 2022/02/27 15:15:12 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string _name )
{
	Zombie *zombieHorde = new Zombie[N];
	
	for(int i = 0; i < N; ++i)
	{	
		zombieHorde[i].setName(_name + std::to_string(i + 1));
		zombieHorde[i].announce();	
	}
	return zombieHorde;
}
