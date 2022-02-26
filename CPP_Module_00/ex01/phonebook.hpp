/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:35:18 by bprovolo          #+#    #+#             */
/*   Updated: 2022/02/22 21:38:59 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class phonebook 
{
	private:
		contact contacts[8];
		int number;
	public:
		phonebook();
		~phonebook();

		void adding(int i);
		void search(void);
		void changeContact(void);
		int	chooseIndex(void);
};

#endif
