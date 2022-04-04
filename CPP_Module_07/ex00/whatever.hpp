/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:08:22 by bprovolo          #+#    #+#             */
/*   Updated: 2022/04/04 19:33:33 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T &a, T &b) {
	T temp = a;
	a = b; 
	b = temp;
	return ;	
}

template <typename T>
T min(T a, T b)
{
	if (a == b)
		return b;
	return (a < b) ? a : b;
}

template <typename T>
T max(T a, T b)
{
	if (a == b)
		return b;
	 return (a > b) ? a : b;
}

#endif
