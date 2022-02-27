/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 19:48:59 by bprovolo          #+#    #+#             */
/*   Updated: 2022/02/27 20:21:31 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(const std::string name, Weapon& weapon);
		~HumanA(void);
		void attack( void );
		void setWeapon(Weapon& weapon);
			
	private:
		std::string _name;
		Weapon& _weapon;
		
};

#endif
