/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 18:01:35 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/15 21:10:33 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main ()
{
	FragTrap a("Vasya");
	std::cout << a.getName() << ": current hp is: " << a.getHealth() << std::endl;
	std::cout << a.getName() << ": energy point: " << a.getEnergy() << std::endl;

	FragTrap b("Ivan");
	FragTrap c(a);
	
	
	std::cout << b.getName() << ": current hp is: " << b.getHealth() << std::endl;
	std::cout << b.getName() << ": energy point: " << b.getEnergy() << std::endl;
	
	a = b;

	a.highFivesGuys();
}
