/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:08:22 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/20 19:55:07 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal

{
    public:
        Dog();
 
        virtual ~Dog();
        Dog (const Dog & src);
        Dog & operator= (const Dog & src);

	     virtual void makeSound();
};

#endif