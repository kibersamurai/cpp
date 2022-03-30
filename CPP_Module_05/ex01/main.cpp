/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 15:26:17 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/30 20:59:50 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try {  
		Bureaucrat a("[Samurai]", 50);
		std::cout << a << std::endl << std::endl;
		Form b("[Form]", 70, 50);
		std::cout << b << std::endl << std::endl;
		try {
			a.signForm(b);
			b.beSigned(a);
		}
		catch (const std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl << b << std::endl << std::endl;
	}
	catch ( const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "========================" << std::endl; 
	try {  
		Form d("[Form2]", 0, 100);
		std::cout << d << std::endl << std::endl;
		Bureaucrat c("[Shogun]", 100);
		std::cout << c << std::endl << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "========================" << std::endl; 
	try {  
		Bureaucrat R("[Ronin]", 100);
		std::cout << R << std::endl << std::endl;
		Form F("[Form3]", 60, 40);
		std::cout << F << std::endl << std::endl;
		try {
			R.signForm(F);
			std::cout << std::endl;
			F.beSigned(R);
		}
		catch (const std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
		std::cout << F << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
