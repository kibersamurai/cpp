/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:05:03 by bprovolo          #+#    #+#             */
/*   Updated: 2022/04/05 21:00:14 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"
#include <list>
#include <vector>

int main( void ) {

    std::list<int> lst1;

	lst1.push_back(1);
	lst1.push_back(2);
	lst1.push_back(4);
	lst1.push_back(8);

	std::cout << "   TEST LIST  " << std::endl;
	std::cout << "find[1]" << std::endl;

	try {
		std::cout << easyfind(lst1, 1) << std::endl;
	}
	catch (const std::string & e) {
		std::cout << e << std::endl;
	}
	std::cout << "find[100]" << std::endl;
	try {
		std::cout << easyfind(lst1, 100) << std::endl;
	}
	catch (const std::string & e) {
		std::cout << e << std::endl;
	}
	
	std::cout << "   TEST VECTOR  " << std::endl;
	std::vector<int> vec2;
	vec2.push_back(1);
	vec2.push_back(3);
	vec2.push_back(5);
	vec2.push_back(7);
	 	std::cout << "find[1]" << std::endl;

	try {
		std::cout << easyfind(vec2, 1) << std::endl;
	}
	catch (const std::string & e) {
		std::cout << e << std::endl;
	}
	std::cout << "find[100]" << std::endl;
	try {
		std::cout << easyfind(vec2, 100) << std::endl;
	}
	catch (const std::string & e) {
		std::cout << e << std::endl;
	}

return 0;
}
