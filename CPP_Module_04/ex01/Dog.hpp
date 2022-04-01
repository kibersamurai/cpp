/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:08:22 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/20 18:32:44 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal

{
	private:
		Brain* brain;
	
    public:
        Dog();
 
        ~Dog();
        Dog (const Dog & src);
        Dog & operator= (const Dog & src);

	    virtual void makeSound();
};

#endif