/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 18:05:19 by bprovolo          #+#    #+#             */
/*   Updated: 2022/02/27 16:40:28 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	/*  string variable */
	std::string string = "HI THIS IS BRAIN";

	/* указатель на  строку*/
	std::string *stringPTR = &string;

	/* ссылка на строку */
	std::string& stringREF = string;

	/* геттер */
	std::cout << "String: " << std::endl
	<< "string variable >> " << string << std::endl
	<< "a pointer to the string >> " << *stringPTR << std::endl
	<< "a reference to the string >> " << stringREF << std::endl
	<< std::endl;
	
	std::cout << "Address in memory: " << std::endl
	<< "string variable >> " << &string << std::endl
	<< "a pointer to the string >> " << stringPTR << std::endl
	<< "a reference to the string >> " << &stringREF << std::endl
	<< std::endl;
	
	return 0;
}
