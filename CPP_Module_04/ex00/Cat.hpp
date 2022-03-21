/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 20:02:39 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/20 16:47:30 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal

{
    public:
        Cat();
 
        virtual ~Cat();
        Cat (const Cat & src);
        Cat & operator= (const Cat & src);

	    virtual void makeSound();
};

#endif
