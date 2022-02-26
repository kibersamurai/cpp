/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 20:33:19 by bprovolo          #+#    #+#             */
/*   Updated: 2022/02/26 20:52:05 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*It creates a zombie, name it, and the zombie announces itself.*/

void randomChump( std::string name )
{
	Zombie temp(name);
	temp.announce();	
}
