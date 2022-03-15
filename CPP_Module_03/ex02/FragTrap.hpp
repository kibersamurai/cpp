/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 20:02:39 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/15 20:10:36 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap

{
    public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
        
        FragTrap (const FragTrap & src);
        FragTrap & operator= (const FragTrap & src);

        void highFivesGuys(void);
	    void attack(const std::string& target);
};
#endif
