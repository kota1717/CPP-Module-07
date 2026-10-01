/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikota <ikota@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 18:26:51 by ikota             #+#    #+#             */
/*   Updated: 2026/10/01 18:53:03 by ikota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_WHATEVER_HPP_
#define EX00_WHATEVER_HPP_

template <typename T>
void swap(T& x, T& y) {
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
}

template<typename T>
const T& min(T& x, T&y) {
	if (x < y) {
		return x;
	}
	return y;
}

template<typename T>
const T& max(T& x, T&y) {
	if (x > y) {
		return x;
	}
	return y;
}

#endif
