/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikota <ikota@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 19:28:18 by ikota             #+#    #+#             */
/*   Updated: 2026/10/02 15:54:29 by ikota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_ARRAY_HPP_
#define EX02_ARRAY_HPP_

template <typename T>
class Array {
	int _num_elems;
	T* _array;
public:
	Array() : _num_elems(0), _array(NULL) {}
	Array(unsigned int n) : _num_elems(n) { _array = new T[n](); }
	Array(const Array& other);
	Array& operator=(const Array& other);
	~Array() { delete[] _array; }

	T& operator[](unsigned int index) const;
	std::size_t size() const;
};

template<typename T>
Array<T>::Array(const Array& other) : _num_elems(0), _array(NULL) {
	// T* array = new T[_num_elems];
	// for (int i = 0; i < _num_elems; i++) {
	// 	array[i] = other._num_elems;
	// }
	*this = other;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& other) {
	if (this == &other)
		return *this;
	delete[] _array;
	_num_elems = other._num_elems;
	_array = new T[_num_elems];
	for (int i = 0; i < _num_elems; i++) {
		_array[i] = other._array[i];
	}
	return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int index) const {
	if (index >= (unsigned int)_num_elems) {
		throw std::out_of_range("Index out of range");
	}
	return _array[index];
}

template<typename T>
std::size_t Array<T>::size() const {
	return static_cast<size_t>(_num_elems);
}

#endif
