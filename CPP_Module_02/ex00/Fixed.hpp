/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 18:10:12 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/08 00:40:39 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
/* default constructor - может быть вызван без аргументов */
		Fixed(void);
		
/* copy constructor - такой конструктор принимает 
как минимум один аргумент: ссылку на копируемый объект. */
		Fixed( Fixed const &a); 

/* copy assignment operator */
		Fixed &	operator = (const Fixed &a);

		~Fixed(void);
/* возвращает raw value of the fixed-point value. */
		int getRawBits( void ) const;
		
/* that sets the raw value of the fixed-point number. */
		void setRawBits( int const raw);
		
	private:
		int fixedPoint;
		static const int fractBits = 8;
};

#endif
