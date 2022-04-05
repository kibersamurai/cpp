/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:30:23 by bprovolo          #+#    #+#             */
/*   Updated: 2022/04/04 22:31:01 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <class T>

class Array
{
	private:
		T *elements;
		unsigned int size_;
	public:
		Array()
		{
			size_ = 0;
			elements = nullptr;
		}
		Array(unsigned int n)
		{
			elements = new T[n];
			size_ = n;
		}
		~Array()
		{
			if (size_)
				delete[] elements;
		}

		Array( const Array & src) {
			size_ = 0;
			elements = nullptr;
			*this = src;
		}

		unsigned int size() const{
			return this->size_;
		}
		
		Array & operator= ( const Array & src )
		{
			elements = new T[src.size_];
			for (unsigned int i = 0; i < src.size(); i++){
			this->elements[i] = src.elements[i];
			}
			this->size_ = src.size_;
			return *this; 
		}
		
		T & operator[] ( unsigned int index ) {
        if (index >= size_)
            throw std::exception();
        return elements[index];
    	}	
};

#endif
