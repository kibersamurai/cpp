/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp 		                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:17:08 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/20 17:51:51 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {

public:
	Brain();
	Brain(const Brain & src);
	~Brain();
	Brain & operator= ( const Brain & src );

	std::string ideas[100];

};

#endif
