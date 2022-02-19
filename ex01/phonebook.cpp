/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 19:05:12 by bprovolo          #+#    #+#             */
/*   Updated: 2022/02/19 19:55:36 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

phonebook::phonebook() 
{
	this->number = 0;	
}

phonebook::~phonebook()
{
	std::cout << "END\n";
}

void phonebook::adding(int i)
{
	if (this->number != 8)
		this->number++;
	this->contacts[i].adding();
}

void phonebook::search(void)
{
	if (this->number == 0)
	{
		std::cout << "Phonebook is empty\n";
		return ;
	}
	std::cout << "|************************************************|\n";
	std::cout << "|   INDEX | FIRST NAME | LAST NAME | NICKNAME    |\n";
	std::cout << "|*********|************|***********|*************|\n";
}