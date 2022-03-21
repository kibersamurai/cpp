/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 20:02:39 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/20 18:26:18 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal

{
	private:
		Brain* brain;
		
    public:
        Cat();
 
        virtual ~Cat();
        Cat (const Cat & src);
        Cat & operator= (const Cat & src);

	    virtual void makeSound();
};

#endif
