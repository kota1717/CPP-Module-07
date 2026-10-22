/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikota <ikota@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 19:28:18 by ikota             #+#    #+#             */
/*   Updated: 2026/10/22 14:07:00 by ikota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_ARRAY_HPP_
#define EX02_ARRAY_HPP_

template <typename T>
class Array {
	unsigned int num_elems_;
	T* array_;
public:
	Array() : num_elems_(0), array_(NULL) {}
	Array(unsigned int n) : num_elems_(n) { array_ = new T[n](); }
	Array(const Array& other);
	Array& operator=(const Array& other);
	~Array() { delete[] array_; }

	const T& operator[](unsigned int index) const;
	T& operator[](unsigned int index);
	std::size_t size() const;
};

template<typename T>
Array<T>::Array(const Array& other) : num_elems_(other.num_elems_), array_(NULL) {
	if (num_elems_ > 0) {
		array_ = new T[num_elems_];
		for (unsigned int i = 0; i < num_elems_; i++) {
			array_[i] = other.array_[i];
		}
	}
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& other) {
	if (this == &other)
		return *this;
	delete[] array_;
	num_elems_ = other.num_elems_;
	array_ = NULL;

	if (num_elems_ > 0) {
		array_ = new T[num_elems_];
		for (unsigned int i = 0; i < num_elems_; i++) {
			array_[i] = other.array_[i];
		}
	}
	return *this;
}

template<typename T>
const T& Array<T>::operator[](unsigned int index) const {
	if (index >= (unsigned int)num_elems_) {
		throw std::out_of_range("Index out of range");
	}
	return array_[index];
}

template<typename T>
T& Array<T>::operator[](unsigned int index) {
	if (index >= (unsigned int)num_elems_) {
		throw std::out_of_range("Index out of range");
	}
	return array_[index];
}

template<typename T>
std::size_t Array<T>::size() const {
	return static_cast<size_t>(num_elems_);
}

#endif
