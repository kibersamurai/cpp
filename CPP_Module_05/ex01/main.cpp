/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 15:26:17 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/29 20:26:13 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {  
		Bureaucrat a("[Ronin]", 151);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "============" << std::endl; 
	Bureaucrat b("[Tyler]", 150);
	std::cout << std::endl;
	std::cout << b << std::endl;
	b.setGrade(151);
	std::cout << std::endl;
	std::cout << b << std::endl;
	std::cout << "\n   Test operator -1: " << std::endl;
	--b;
	std::cout << b.getName()
	<< " grade: "
	<< b.getGrade() << std::endl;
	std::cout << "\n   Test operator +1: " << std::endl;
	++b; 
	std::cout << b.getName()
	<< " grade: "
	<< b.getGrade() << std::endl;
	std::cout << "\n   Test operator to print: " << std::endl;
	std::cout << b << std::endl;
	std::cout << "============" << std::endl; 
	Bureaucrat * norm = new Bureaucrat("[Samurai]", 1);
	std::cout << norm->getName()
	<< " grade: "
	<< norm->getGrade() << std::endl;

	norm->setGrade(0);
	std::cout << norm->getName()
	<< " grade: "
	<< norm->getGrade() << std::endl;
	std::cout << std::endl;
	delete norm;
  	return 0;
}
