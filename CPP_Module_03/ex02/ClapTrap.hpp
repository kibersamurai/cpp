/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:59:19 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/14 21:17:22 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
protected:
	std::string _name;
	int hitPoint;
	int energyPoint;
	int attackDamage;
	ClapTrap();
public:
	~ClapTrap();
	ClapTrap(std::string name);
	ClapTrap( const ClapTrap & src);
	ClapTrap( std::string name, int hitPoint, int energy, int damage);
	ClapTrap & operator= ( const ClapTrap & src );
	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void setDamage( int damage );
	int getHealth( void ) const;
	std::string getName( void ) const;
	int getEnergy( void ) const;
};

#endif
