/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedOperators.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:46:08 by skanna            #+#    #+#             */
/*   Updated: 2024/10/28 15:07:16 by skanna           ###   ########.fr       */
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
	std::cout << "addition operator called\n";
	Fixed new_i;
	new_i.setRawBits(this->_value + i.getRawBits());
	return (new_i);
}

Fixed Fixed::operator-(Fixed const & i) {
	std::cout << "subtraction operator called\n";
	Fixed new_i;
	new_i.setRawBits(this->_value - i.getRawBits());
	return (new_i);
}

Fixed Fixed::operator*(Fixed const & i) {
	std::cout << "multiplication operator called\n";
	Fixed new_i;
	int	result;
	result = (this->_value >> _fBits) * i.getRawBits();
	// result = result >> _fBits;
	new_i.setRawBits(result);
	return (new_i);
}

Fixed Fixed::operator/(Fixed const & i) {
	std::cout << "division operator called\n";
	if (i.getRawBits() == 0)
		std::cout << "Cannot divide by zero\n";
	Fixed new_i;
	int	result;
	result = (this->_value << _fBits)/ i.getRawBits();
	new_i.setRawBits(result);
	return (new_i);
}


//increment/decrement operators
Fixed & Fixed::operator++() {
	std::cout << "pre increment operator called\n";
	++(this->_value);
	return (*this);
}

Fixed Fixed::operator++(int) {
	std::cout << "post increment operator called\n";
	Fixed ptr = *this;//creates a copy of the current state
	++(this->_value);//increments the value for the next call
	return (ptr);
}

Fixed & Fixed::operator--() {
	std::cout << "pre decrement operator called\n";
	--(this->_value);
	return (*this);
}

Fixed Fixed::operator--(int) {
	std::cout << "post decrement operator called\n";
	Fixed ptr = *this;//creates a copy of the current state
	--(this->_value);//decrements the value for the next call
	return (ptr);
}