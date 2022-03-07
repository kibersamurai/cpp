/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:07:55 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/07 17:14:15 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int getCommand( std::string str)
{
	int i, n;
	std::string temp[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (i = 0, n = 0; i < 4 && n == 0; i++)
		if (str.compare(temp[i]) == 0)
			n = i + 1;
	return n;
}

void Karen::complain(std::string level)
{
	int n = getCommand(level);
	switch (n)
	{
		case 1:
			this->debug();
		case 2:
			this->info();
		case 3:
			this->warning();
		case 4:
			this->error();
		break ;
		default:
			this->defaultCase();		
	}
}

void Karen::debug( void )
{
	std::cout << "[ DEBUG ]\n"
	<< "I love having extra bacon for my " 
	<< "7XL-double-cheese-triple-pickle-specialketchup burger. "
	<< "I really do!\n";
}

void Karen::info( void )
{
	std::cout << "[ INFO ]\n"
	<< "I cannot believe adding extra bacon costs more money. " 
	<< "You didn’t putenough bacon in my burger! "
	<< "If you did, I wouldn’t be asking for more!\n";
}

void Karen::warning( void )
{
	std::cout << "[ WARNING ]\n"
	<< "I think I deserve to have some extra bacon for free. "
	<< "I’ve been coming for years whereas you started working here since last month.\n";
}

void Karen::error( void )
{
	std::cout << "[ ERROR ]\n"
	<< "This is unacceptable! I want to speak to the manager now.\n" ;
}

void Karen::defaultCase( void )
{
	std::cout << "Probably complaining about insignificant problems\n" ;
}
