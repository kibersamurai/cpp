/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 15:26:17 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/20 20:02:46 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal* meta = new Animal();
	Animal* j = new Dog();
	Animal* i = new Cat();
	std::cout << std::endl;
	i->makeSound();  
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	WrongAnimal d;
	d.makeSound();
	std::cout << std::endl;
	WrongAnimal* e = new WrongCat();
	e->makeSound();
	std::cout << std::endl;
	WrongCat f;
	WrongAnimal& h = f;
	f.WrongAnimal::makeSound();
	h.makeSound();
	delete meta;
	delete i;
	delete j;
	return 0;
}	