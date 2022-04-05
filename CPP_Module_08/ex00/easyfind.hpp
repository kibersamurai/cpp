/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:08:22 by bprovolo          #+#    #+#             */
/*   Updated: 2022/04/05 20:58:51 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>

template <typename T>
int easyfind(T &a, int b) {
	typename T::const_iterator ptr = find(a.begin(), a.end(), b);
	if (ptr == a.end())
		throw std::string ("can't find");
	return *ptr;	
}


#endif
