/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikota <ikota@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 19:01:40 by ikota             #+#    #+#             */
/*   Updated: 2026/10/02 13:05:07 by ikota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_ITER_HPP_
#define EX01_ITER_HPP_

#include <cstddef>

template <typename T, typename FuncType>
void iter(T* array, const std::size_t num_elems, FuncType func) {
	if (!array)
		return;
	for (std::size_t i = 0; i < num_elems; i++) {
		func(array[i]);
	}
}

#endif
