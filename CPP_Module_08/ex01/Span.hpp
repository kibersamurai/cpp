/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:36:33 by bprovolo          #+#    #+#             */
/*   Updated: 2022/04/05 21:20:46 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <vector>
# include <algorithm>

#ifndef SPAN_HPP
# define SPAN_HPP

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
    void addNumber( const std::vector<int> & src , int size );
    int shortestSpan( void );
    int longestSpan( void );
};

#endif