/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:25:55 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/08 19:17:08 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : fixedPoint(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed( Fixed const & a ) 
{
	std::cout << "Copy constructor called\n";
	*this = a;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return this->fixedPoint;
}

void Fixed::setRawBits( int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->fixedPoint = raw;
}

Fixed & Fixed::operator = (Fixed const &a)
{
	std::cout << "Copy assignment operator called\n";
	this->fixedPoint = a.getRawBits();
	return *this;
}

float Fixed::toFloat(void) const
{
	return (fixedPoint / (float)(1 << fractBits));
}

int Fixed::toInt( void ) const
{
	return (fixedPoint >> fractBits);	
}

std::ostream & operator<< (std::ostream & o, Fixed const & fixed )
{
	o << fixed.toFloat();
	return o;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called\n"; 
}

Fixed::Fixed(const float num)
{
}
