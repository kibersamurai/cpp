/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 19:05:12 by bprovolo          #+#    #+#             */
/*   Updated: 2022/02/23 11:14:56 by bprovolo         ###   ########.fr       */
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
	int n = 1;	
	while (n)
		n = this->contacts[i].adding();
}

int phonebook::chooseIndex(void)
{
	std::string temp;
	if (!(std::getline(std::cin, temp)))
		exit (1);
	if (temp.length() == 1)
	{
		int i;
		
		i = 0;
		
		while ( i < this->number)
		{
			if (i == (temp[0] - '0') - 1)
			{
				this->contacts[i].getContact();
				return 0;
			}
			i++;
		}
	}
	else 
		std::cout << "Index is wrong " << temp << std::endl;
	return 1;
}

void phonebook::search(void)
{
	if (this->number == 0)
	{
		std::cout << "Phonebook is empty\n";
		return ;
	}
	std::cout << "|****************************************|\n";
	std::cout << "| INDEX |FIRST NAME|LAST NAME | NICKNAME |\n";
	std::cout << "|*******|**********|**********|**********|\n";

	for (int i = 0; i < this->number; i++)
	{
		this->contacts[i].print(i);
		std::cout << "|*******|**********|**********|**********|\n";
	}
	do
	{
		std::cout << "Enter index of contact: ";
	}
	while (chooseIndex());
}

void phonebook::changeContact(void)
{
	std::cout << "Phonebook is full. Last contacts was deleted" << std::endl;
	for (int i = 0; i < 7; i++)
		this->contacts[i] = this->contacts[i + 1];
}
