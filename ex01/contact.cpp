/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 19:12:16 by bprovolo          #+#    #+#             */
/*   Updated: 2022/02/19 19:43:57 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact() {

}

contact::~contact() {
	
}

void contact::adding(void)
{
	std::cout << ">>>> Enter FIRST NAME: ";
	if (!(std::getline(std::cin, this->first_name)))
		exit (1);
	std::cout << ">>>> Enter LAST NAME: ";
	if (!(std::getline(std::cin, this->last_name)))
		exit (1);
	std::cout << ">>>> Enter NICKNAME: ";
	if (!(std::getline(std::cin, this->nickname)))
		exit (1);
	std::cout << ">>>> Enter PHONE NUMBER: ";
	if (!(std::getline(std::cin, this->phone_number)))
		exit (1);
	std::cout << ">>>> Enter DARKEST SEXRET: ";
	if (!(std::getline(std::cin, this->darkest_secret)))
		exit (1);
	std::cout << "******* Contact added ******* \n";
}
