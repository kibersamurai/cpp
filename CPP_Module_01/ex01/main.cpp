/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 18:05:19 by bprovolo          #+#    #+#             */
/*   Updated: 2022/02/26 22:10:15 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *Horde = zombieHorde(4, "ildar");
	for(int i = 0; i < 4; i++)
	{
		Horde[i].announce();
	}
	return 0;
}
