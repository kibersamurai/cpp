/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:44:59 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/20 11:59:34 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class Animal {
protected:
	std::string type;
public:
	Animal();
	~Animal();
	Animal(std::string _type);
	Animal( const Animal & src);
	Animal & operator= ( const Animal & src );

    void makeSound();	
};

#endif