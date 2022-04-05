/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:05:03 by bprovolo          #+#    #+#             */
/*   Updated: 2022/04/04 22:28:35 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template <typename T>
void plus5(T &a) {
	a += 5;
	return ;	
}

int main ()
{
	
	int array1[4] = {0, 10, 11, 12};
	std::cout << "ARRAY (int): "   << std::endl;
	for (int i = 0; i < 4; i++)
	{
		std::cout << " [" << array1[i] << "] ";
	}
	iter(array1, 4, plus5);
	std::cout << std::endl << "called  ITER ( function plus5) "   << std::endl;
	for (int i = 0; i < 4; i++)
	{
		std::cout << " [" << array1[i] << "] ";
	}
	std::cout << std::endl << std::endl;

	
	float array2[3] = {8.2f, 10.0f, 23.02f};
	std::cout << std::endl << "ARRAY (float): "   << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << " [" << array2[i] << "] ";
	}
	iter(array2, 3, plus5);
	std::cout << std::endl << "called  ITER ( function plus5)"   << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << " [" << array2[i] << "] ";
	}
	std::cout << std::endl;

	return 0;
}
