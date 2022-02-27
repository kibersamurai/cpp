/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 18:10:12 by bprovolo          #+#    #+#             */
/*   Updated: 2022/02/27 15:01:16 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string _name);
		~Zombie(void);
		void announce( void );
		void 	setName(std::string _name);
		
	private:
		std::string name;
		
};

Zombie* zombieHorde( int N, std::string _name );

#endif
