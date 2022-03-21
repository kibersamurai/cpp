/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:44:59 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/20 20:23:36 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {

protected:
	std::string type;
	Animal();
	
public:
	Animal( const Animal & src);
	Animal(std::string _type);
	virtual ~Animal();
	Animal & operator= ( const Animal & src );

  void setType(std::string type);
	std::string getType() const;
   	virtual void makeSound() = 0;	
};

#endif
