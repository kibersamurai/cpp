/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 19:12:16 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/13 21:00:30 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact() {

}

contact::~contact() {
	
}

int contact::adding(void)
{
	std::cout << ">>>> Enter FIRST NAME: ";
	// if (first_name.length() != 0)
	// 	this->first_name = "          ";
	if (!(std::getline(std::cin, this->first_name)))	
		exit (1);
	if (first_name.length() == 0)
	{
		std::cout << "A contact can’t have empty fields!!!\n";
		return 1;
	}
	std::cout << ">>>> Enter LAST NAME: ";
	if (!(std::getline(std::cin, this->last_name)))
		exit (1);
	if (last_name.length() == 0)
	{
		std::cout << "A contact can’t have empty fields!!!\n";
		return 1;
	}
	std::cout << ">>>> Enter NICKNAME: ";
	if (!(std::getline(std::cin, this->nickname)))
		exit (1);
	if (nickname.length() == 0)
	{
		std::cout << "A contact can’t have empty fields!!!\n";
		return 1;
	}
	std::cout << ">>>> Enter PHONE NUMBER: ";
	if (!(std::getline(std::cin, this->phone_number)))
		exit (1);
	if (phone_number.length() == 0)
	{
		std::cout << "A contact can’t have empty fields!!!\n";
		return 1;
	}
	std::cout << ">>>> Enter DARKEST SECRET: ";
	if (!(std::getline(std::cin, this->darkest_secret)))
		exit (1);
	if (darkest_secret.length() == 0)
	{
		std::cout << "A contact can’t have empty fields!!!\n";
		return 1;
	}
	std::cout << "******* Contact added ******* \n";
	return 0;
}

void	contact::print(int i)
{
	std::cout << "|";
	std::cout << std::setw(7) << i + 1 << "|";
	if (this->first_name.length() < 11)
		std::cout << std::setw(10) << this->first_name << "|";
	else 
		std::cout << this->first_name.substr(0,9) << ".|";
	if (this->last_name.length() < 11)
		std::cout << std::setw(10) << this->last_name << "|";
	else 
		std::cout << this->last_name.substr(0,9) << ".|";
	if (this->nickname.length() < 11)
		std::cout << std::setw(10) << this->nickname << "|" << std::endl;
	else 
		std::cout << this->nickname.substr(0,9) << ".|";
}

void contact::getContact(void) {
	std::cout << "FIRST NAME is: " << this->first_name << std::endl;
	std::cout << "LAST NAME is: " << this->last_name << std::endl;
	std::cout << "NICKNAME is: " << this->nickname << std::endl;
	std::cout << "Phone number is: " << this->phone_number << std::endl;
	std::cout << "Darkest secret is: " << this->darkest_secret << std::endl;
}
