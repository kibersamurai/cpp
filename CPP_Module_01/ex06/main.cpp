/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 16:57:48 by bprovolo          #+#    #+#             */
/*   Updated: 2022/03/07 15:09:32 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av)
{
	Karen karen = Karen();
	if (ac != 2)
	{
		std::cout << "Wrong number of args!\n";
		return 1;
	}
	karen.complain(av[1]);
	return 0;
}
