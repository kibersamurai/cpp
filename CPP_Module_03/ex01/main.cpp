/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 18:01:35 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/13 19:48:28 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ()
{
	ClapTrap a("[Aggressor]");
	
	std::cout << a.getName() << " hit point: " << a.getHealth() << std::endl;
	std::cout << a.getName() << " energy: " << a.getEnergy() << std::endl;
	
	ClapTrap b("[Victim]");
	std::cout << b.getName() << " hit point: " << b.getHealth() << std::endl;
	std::cout << b.getName() << " energy: " << b.getEnergy() << std::endl;
	int damageAmmount;
	std::cout << "\n" << " >> Enter the amount of damage: \n";
	std::cin >> damageAmmount; 
	a.setDamage(damageAmmount);
	a.attack("[Victim]");
	b.takeDamage(damageAmmount);
	std::cout << b.getName() << " hit point: " << b.getHealth() << std::endl;
	std::cout << a.getName() << " energy: " << a.getEnergy() << std::endl;
	a.beRepaired(5);
	std::cout << a.getName() << " hit point: " << a.getHealth() << std::endl;
	std::cout << a.getName() << " energy: " << a.getEnergy() << std::endl;
	
	std::cout << b.getName() << " energy: " << b.getEnergy() << std::endl;

	ClapTrap c("Bob");
	ClapTrap d("Fob");
	std::cout << " Name class 'c' " << c.getName() << std::endl;
	std::cout << " Name class 'd' " << d.getName() << std::endl;
	d = c;
	std::cout << " Name class 'd' " << d.getName() << std::endl;
	
}