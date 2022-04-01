/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 15:26:17 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/20 19:42:21 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Animal *zoo[10];

    for (int i = 0; i < 10; ++i) {
        if (i % 2)
            zoo[i] = new Cat();
        else
            zoo[i] = new Dog();
    }
    for (int i = 0; i < 10; ++i) {
        std::cout << "My number is " << i + 1
        << ". I am " << zoo[i]->getType() << "!";
        zoo[i]->makeSound();
        delete(zoo[i]);
    }
    return 0;

}