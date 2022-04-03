/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:05:03 by bprovolo          #+#    #+#             */
/*   Updated: 2022/04/03 18:10:54 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

bool isChar(double num) {
	if (std::isnan(num) || std::isinf(num) || (num < 0) || (num > 127))	
		return true;
	else 
		return false;
}

void convertChar(double num) {
	if (isChar(num))
		std::cout << "Char:  imposible\n";
	else if (!std::isprint(num))
		std::cout << "Char:  not displayable\n";
	else 
		std::cout << "Char: " << static_cast<char>(num) << std::endl;
}

bool isInt(double num) {
	if (std::isnan(num) || std::isinf(num) || (num > std::numeric_limits<int>::max ()) || ( num < std::numeric_limits < int>::min()))
		return true;
	else 
		return false;
}

void convertInt(double num) {
	if (isInt(num))
		std::cout << "Integer: imposible\n";
	else 
		std::cout << "Integer: " << static_cast<int>(num) << std::endl;
}

void convertFloat(double num, std::string &value) {
	float floatNum = static_cast<float>(num);
	if (!(value.find('.') == std::string::npos && (std::isnan(num) || std::isinf(num))))
		std::cout << "Float: " << floatNum << ".0f" << std::endl;		
	else
		std::cout << "Float: " << floatNum << "f" << std::endl;	
}

void convertDouble(double num, std::string &value) {
	float doubleNum = static_cast<double>(num);
	if (!(value.find('.') == std::string::npos && (std::isnan(num) || std::isinf(num))))
		std::cout << "Double: " << doubleNum << ".0\n";		
	else
		std::cout << "Double: " << doubleNum  << std::endl;	
}

int main (int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "Expected: ./convert [value]" << std::endl;
		return 1;
	}
	std::cout << "   Conversion:\n";
	std::string value;
	value = argv[1];
	double temp;
	temp = std::strtod( value.c_str(), nullptr);
	if ((temp == 0 && !isdigit(value[0])) && value[1] == '\0')
		temp = static_cast<double>(value[0]);
	convertChar(temp);
	convertInt(temp);
	convertFloat(temp, value);
	convertDouble(temp, value);
	return 0;
}



/*  double strtod( const char * string, char ** endptr );

Функция strtod преобразовывает строку string в double. 
Анализируя строку string, strtod интерпретирует её содержимое в число типа double. 
Если endptr не является нулевым указателем, то функция устанавливает значение endptr на первый символ после числа.

c_str - возврат указателя на символ любой строковой переменной. 
 возвращает указатель символа на исходный массив переменных, 
 который может содержать или не содержать последовательность символов, заканчивающуюся нулем. */