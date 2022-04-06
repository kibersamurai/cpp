/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:43:23 by bprovolo          #+#    #+#             */
/*   Updated: 2022/04/06 20:24:50 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include "Span.hpp"
	
    Span::Span() : _size(0) {
		
	}

 	Span::~Span() {
		 
	 }
	 
    Span::Span( unsigned int size ) : _size(size) {
		
	}
	
    Span::Span( const Span & src ) : _size(src._size) {
		*this = src;
	}
	
    Span & Span::operator= ( const Span & src ) {
		if (this != &src) {
			this->_size = src._size;
			this->storage = src.storage;
		}
		return *this;
	}

    void Span::addNumber( int number ) {
		if (storage.size() >= this->_size)
			throw exceSpan("array is full");
		this->storage.push_back(number);
	}
	
    void Span::addNumbers( const std::vector<int> & src , int size ) 
	{
		for (int i = 0; i < size && i < (int)src.size(); i++)
			Span::addNumber(src[i]);
	}
	
    int shortestSpan( void );
	
    int Span::longestSpan( void ) {
	if (storage.size() == 0 || storage.size() == 1) {
		throw exceSpan("array is too small");
	}
		std::vector<int>::iterator start = storage.begin(); 
	}