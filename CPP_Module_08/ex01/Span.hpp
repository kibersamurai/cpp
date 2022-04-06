/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:36:33 by bprovolo          #+#    #+#             */
/*   Updated: 2022/04/06 20:20:22 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span {

private:
    std::vector<int> storage;
    unsigned int _size;
    Span();

public:
    virtual ~Span();
    Span( unsigned int size );
    Span( const Span & src );
    Span & operator= ( const Span & src );

    void addNumber( int number );
    void addNumbers( const std::vector<int> & src , int size );
    int shortestSpan( void );
    int longestSpan( void );

	class exceSpan : public std::exception {
		private:
			std::string ret;
		public:
			exceSpan(std::string ret) : ret(ret){};
			virtual ~exceSpan() throw(){};
			virtual const char * what() const throw(){
				return (ret.c_str());
			};
	};
};

#endif