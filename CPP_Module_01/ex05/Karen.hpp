/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 20:06:11 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/07 16:17:35 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

class Karen
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		void defaultCase( void );

	public:
		void complain(std::string level);
};

#endif