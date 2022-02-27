/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:13:08 by bprovolo          #+#    #+#             */
/*   Updated: 2022/02/27 20:25:21 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(const std::string name);
		~HumanB(void);
		void attack( void );
		void setWeapon(Weapon& weapon);
			
	private:
		std::string _name;
		Weapon *_weapon;
		
};

#endif
