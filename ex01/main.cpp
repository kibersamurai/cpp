/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 19:50:31 by bprovolo          #+#    #+#             */
/*   Updated: 2022/02/21 20:22:58 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"



// contact::contact(/* args */)
// {
// }

// contact::~contact()
// {
// }

int checker_cmd(std::string temp)
{
	if (!temp.compare("ADD") || !temp.compare("SEARCH") || !temp.compare("EXIT"))
		return 0;
	std::cout << "\"" << temp << "\" is wrong command\n";
	return 1;
}

int main() 
{
	std::string temp;
	phonebook book;
	int i = 0;
	
	while (1)
	{
		do
		{
			std::cout << "* The program only accepts [ADD], [SEARCH] and [EXIT] * \n";
			if (!(std::getline(std::cin, temp)))
				exit (1);
		} 
		while (checker_cmd(temp));
		if (temp == "ADD")
		{
			if (i == 8)
			{
				i -= 1;				
				book.changeContact();
			}
			book.adding(i++);
		}
		else if (temp == "SEARCH")
			book.search();
		else if (temp == "EXIT")
			break ;
	}
	return 0;
}
