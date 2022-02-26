/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 18:10:12 by bprovolo          #+#    #+#             */
/*   Updated: 2022/02/26 22:23:28 by bprovolo         ###   ########.fr       */
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
		Zombie(std::string name);
		~Zombie(void);
		void announce( void ) const;
		void 	setName(std::string name);
		
	private:
		std::string name;
		
};

Zombie* zombieHorde( int N, std::string name );

#endif
