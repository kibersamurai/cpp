/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 15:26:17 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/22 20:42:55 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {  
		Bureaucrat a("First", 151);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}


std::cout << std::endl;
Bureaucrat b("Tyler", 150);
b.setGrade(151);

std::cout << std::endl;

Bureaucrat * norm = new Bureaucrat("Samurai", 1);
std::cout << norm->getName()
<< " grade: "
<< norm->getGrade() << std::endl;

norm->setGrade(0);

	delete norm;
  return 0;
}
