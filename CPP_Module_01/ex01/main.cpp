/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 18:05:19 by bprovolo          #+#    #+#             */
/*   Updated: 2022/02/27 15:29:10 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *Horde;

	Horde = zombieHorde(1, "Allone");
	delete [] Horde;
	
	
	Horde = zombieHorde(10, "Ten");
	delete [] Horde;

	return 0;
}
