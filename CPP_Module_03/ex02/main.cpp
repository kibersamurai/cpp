/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 18:01:35 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/14 21:21:24 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main ()
{
	ScavTrap a("Vasya");
	std::cout << a.getName() << ": current hp is: " << a.getHealth() << std::endl;
	std::cout << a.getName() << ": energy point: " << a.getEnergy() << std::endl;
	
	a.guardGate();
	
}
