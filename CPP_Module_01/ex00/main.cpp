/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 18:05:19 by bprovolo          #+#    #+#             */
/*   Updated: 2022/02/26 20:47:37 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::cout << "First zombie, Vladimir\n";
	Zombie vladimir("Vladimir");
	vladimir.announce();
	std::cout << "Second zombie, Dmitrii - STACK\n";
	randomChump("Dmitrii");
	
	std::cout << "Third zombie, Sergei - HEAP\n";
	Zombie *sergei = newZombie("Sergei");
	sergei->announce();

	delete sergei;
}
