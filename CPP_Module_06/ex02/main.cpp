/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:05:03 by bprovolo          #+#    #+#             */
/*   Updated: 2022/04/03 20:38:34 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>

Base * generate(void)
{
	std::srand(std::time(0)); //use current time as seed for random generator
    int random_variable = std::rand() % 3;
		// std::cout << "Random value on [0 " << 2 << "]: " 
		// 		<< random_variable << '\n';
	switch (random_variable)
	{
		case 1:
			return (new A());
		case 2:
			return (new B());
	default:
		return (new C());
	}
}

void identify(Base* p) {
	if( dynamic_cast<A*>(p))
		std::cout << "Class A \n";
	else if (dynamic_cast<B*>(p))
		std::cout << "Class B \n";
	else if (dynamic_cast<C*>(p))
		std::cout << "Class C \n";
	else 
		std::cout << "Error!\n";
}

void identify(Base& p) {
	    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "A class\n";
   		}
   		catch (std::exception &e) {
    	try {
        	(void)dynamic_cast<B&>(p);
            std::cout << "B class\n";
      	  }
        catch (std::exception &e) {
            try {
                (void)dynamic_cast<C&>(p);
                std::cout << "C class\n";
            }
            catch (std::exception &e) {
                std::cout << "Error!\n";
            }
        }
    }
}

int main ()
{
	Base *classRand = generate();
	identify(classRand);
	identify(*classRand);
	delete classRand;
	return 0;
}
