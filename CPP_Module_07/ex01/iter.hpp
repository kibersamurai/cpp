/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:36:33 by bprovolo          #+#    #+#             */
/*   Updated: 2022/04/04 20:14:37 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void iter(T *arr, int len, void plus5(T &arr)) {
	
	for (int i = 0;  i < len; i++)
		plus5(arr[i]);
	return ;	
}

#endif