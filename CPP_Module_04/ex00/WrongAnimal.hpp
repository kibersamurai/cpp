/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:17:08 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/20 20:06:06 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {

protected:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal & src);
	WrongAnimal( std::string _type );
	~WrongAnimal();
	WrongAnimal & operator= ( const WrongAnimal & src );
	void makeSound();
};

#endif