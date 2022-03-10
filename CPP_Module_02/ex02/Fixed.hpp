/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 18:10:12 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/10 21:20:07 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
/* default constructor - может быть вызван без аргументов */
		Fixed(void);
/* copy constructor - такой конструктор принимает 
как минимум один аргумент: ссылку на копируемый объект. */
		Fixed( Fixed const &a); 
/* takes a constant integer as a parameter */
		Fixed (const int num);
/* takes a constant floating-point number */
		Fixed (const float num);

/* copy assignment operator */
		Fixed &	operator = (const Fixed &a);

		~Fixed(void);

		bool operator == (const Fixed &a) const;
		bool operator != (const Fixed &a) const;
		bool operator >= (const Fixed &a) const;
		bool operator <= (const Fixed &a) const;
		bool operator > (const Fixed &a) const;
		bool operator < (const Fixed &a) const;

		Fixed operator - (const Fixed &a) const;
		Fixed operator + (const Fixed &a) const;
		Fixed operator / (const Fixed &a) const;
		Fixed operator * (const Fixed &a) const;

		Fixed & operator ++ (void);
		Fixed & operator -- (void);
		Fixed operator ++ (int);
		Fixed operator -- (int);
		
/* возвращает raw value of the fixed-point value. */
		int getRawBits( void ) const;
/* that sets the raw value of the fixed-point number. */
		void setRawBits( int const raw);
		
		float toFloat( void ) const;
		int toInt( void ) const;
		
		static Fixed & max ( Fixed & s1, Fixed & s2);
		static Fixed & min ( Fixed & s1, Fixed & s2);
		static const Fixed & max (const Fixed & s1, const Fixed & s2);
		static const Fixed & max (const Fixed & s1, const Fixed & s2);

		
	private:
		int fixedPoint;
		static const int fractBits = 8;
};

std::ostream& operator<<(std::ostream& o, Fixed const & fixed);

#endif
