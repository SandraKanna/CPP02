/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedOperators.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:46:08 by skanna            #+#    #+#             */
/*   Updated: 2024/10/28 17:28:08 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed & Fixed::operator=(Fixed const & to_copy) {
	if (this != &to_copy) {
		this->_value = to_copy.getRawBits();
	}
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Fixed const & i) {
	o << i.toFloat();
	return (o);
}

bool Fixed::operator>(Fixed const & i) const {
	return (this->_value > i.getRawBits());
}

bool Fixed::operator<(Fixed const & i) const {
	return (this->_value < i.getRawBits());
}

bool Fixed::operator>=(Fixed const & i) const {
	return (this->_value >= i.getRawBits());
}

bool Fixed::operator<=(Fixed const & i) const {
	return (this->_value <= i.getRawBits());
}

bool Fixed::operator==(Fixed const & i) const {
	return (this->_value == i.getRawBits());
}

bool Fixed::operator!=(Fixed const & i) const {
	return (this->_value != i.getRawBits());
}

Fixed Fixed::operator+(Fixed const & i) const {
	Fixed new_i;
	new_i.setRawBits(this->_value + i.getRawBits());
	return (new_i);
}

Fixed Fixed::operator-(Fixed const & i) const {
	Fixed new_i;
	new_i.setRawBits(this->_value - i.getRawBits());
	return (new_i);
}

Fixed Fixed::operator*(Fixed const & i) const {
	Fixed new_i;
	int	result;
	result = (this->_value >> _fBits) * i.getRawBits();
	new_i.setRawBits(result);
	return (new_i);
}

Fixed Fixed::operator/(Fixed const & i) const {
	if (i.getRawBits() == 0) {
		std::cerr << "Cannot divide by zero" << std::endl;
		return (Fixed());
	}
	Fixed new_i;
	int	result;
	result = (this->_value << _fBits)/ i.getRawBits();
	new_i.setRawBits(result);
	return (new_i);
}

Fixed & Fixed::operator++() {
	++(this->_value);
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed ptr = *this;
	++(this->_value);
	return (ptr);
}

Fixed & Fixed::operator--() {
	--(this->_value);
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed ptr = *this;
	--(this->_value);
	return (ptr);
}
