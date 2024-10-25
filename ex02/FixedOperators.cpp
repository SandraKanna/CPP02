/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedOperators.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:46:08 by skanna            #+#    #+#             */
/*   Updated: 2024/10/25 18:32:07 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//assignment operator
Fixed & Fixed::operator=(Fixed const & to_copy) {
	std::cout << "Assignment operator called\n";
	if (this != &to_copy) {
		this->_value = to_copy.getRawBits();
	}
	return (*this);
}

//out stream (insertion) operator
std::ostream & operator<<(std::ostream & o, Fixed const & i) {
	o << i.toFloat();
	return (o);
}


//comparison operators
bool Fixed::operator>(Fixed const & i) {
	return (this->_value > i.getRawBits());
}

bool Fixed::operator<(Fixed const & i) {
	return (this->_value < i.getRawBits());
}

bool Fixed::operator>=(Fixed const & i) {
	return (this->_value >= i.getRawBits());
}

bool Fixed::operator<=(Fixed const & i) {
	return (this->_value <= i.getRawBits());
}

bool Fixed::operator==(Fixed const & i) {
	return (this->_value == i.getRawBits());
}

bool Fixed::operator!=(Fixed const & i) {
	return (this->_value != i.getRawBits());
}


//arithmetic operators
Fixed Fixed::operator+(Fixed const & i) {
	Fixed new_i;
	new_i.setRawBits(this->_value + i.getRawBits());
	return (new_i);
}

Fixed Fixed::operator-(Fixed const & i) {
	Fixed new_i;
	new_i.setRawBits(this->_value - i.getRawBits());
	return (new_i);
}

Fixed Fixed::operator*(Fixed const & i) {
	Fixed new_i;
	new_i.setRawBits(this->_value * i.getRawBits());
	return (new_i);
}

Fixed Fixed::operator/(Fixed const & i) {
	if (i.getRawBits() == 0)
		std::cout << "Cannot divide by zero\n";
	Fixed new_i;
	new_i.setRawBits(this->_value / i.getRawBits());
	return (new_i);
}


//increment/decrement operators
Fixed & Fixed::operator++() {
	++(this->_value);
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed ptr = *this;//creates a copy of the current state
	++(this->_value);//increments the value for the next call
	return (ptr);
}

Fixed & Fixed::operator--() {
	--(this->_value);
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed ptr = *this;//creates a copy of the current state
	--(this->_value);//decrements the value for the next call
	return (ptr);
}