/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 16:57:48 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/06 19:49:18 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

std::string* newName(char *str)
{
	std::string *temp = new std::string;
	for (int i = 0; str[i] && str[i] != '.'; i++)
		*temp += toupper(str[i]);
	*temp += ".replace";
	return temp;
}

std::string changeStr(std::string str, const char *oldS, const char *newS, size_t i)
{
	std::string temp;

	i = str.find(oldS);
	if (i == std::string::npos)
		return(str);
	temp = str.substr(0, i);
	temp.append(newS);
	str = changeStr(str.substr(i + strlen(oldS)), oldS, newS, 0);
	temp.append(str);
	return temp;
}

int main(int ac, char **av)
{
	std::string *temp;
	std::ifstream ifs;
	std::ofstream ofs;
	
	if (ac != 4)
	{
		std::cout << "Fail. Try to use 3 arguments\n";
		return 1;
	}
	ifs.open(av[1]);
	if (!ifs.is_open())
	{
		std::cerr << "Error opening file\n";
		return 1;
	}
	
	temp = newName(av[1]);
	ofs.open(*temp);
	if (!ofs.is_open())
	{
		std::cerr << "Error creating file\n";
		return 1;
	}
	std::string str;
	while(!ifs.eof())
	{
		getline(ifs, str);
		str = changeStr(str, av[2], av[3], 0);
		ofs << str;
		str.clear();
		if (!ifs.eof())
			ofs << "\n";
	}
	ifs.close();
	ofs.close();
	delete temp;	
	return 0;
}
