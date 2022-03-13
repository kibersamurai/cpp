/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:52:01 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/13 20:19:04 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap( std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap & src);
		ScavTrap & operator= (const ScavTrap & src);

		void guardGate();
		void attack(const std::string& target);
		
};

#endif