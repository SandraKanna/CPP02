/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:34:46 by skanna            #+#    #+#             */
/*   Updated: 2024/10/25 17:13:40 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fBits = 8;
	
//constructors
Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed const & to_copy) {
	std::cout << "Copy constructor called\n";
	*this = to_copy;
}

Fixed::Fixed(int const i) : _value(i) {
	std::cout << "Int constructor called\n";
	//multiply by 256 to convert it to fixed-point value, 
	_value *= pow(2, _fBits);
}

Fixed::Fixed(float const f) {
	std::cout << "Float constructor called\n";
	//multiply by 256 to convert it to fixed-point value and round it,
	_value = roundf(f * (pow(2, _fBits)));
	
}

// destructor
Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}


//overload operators
Fixed & Fixed::operator=(Fixed const & to_copy) {
	std::cout << "Assignment operator called\n";
	if ( this != &to_copy) {
		this->_value = to_copy.getRawBits();
	}
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Fixed const &i) {
	o << i.toFloat();
	return (o);
}


// Accessors
int Fixed::getRawBits(void) const {
	return (_value);
}

void Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

float Fixed::toFloat(void) const {
	return((float)(this->getRawBits() * (pow(2, -_fBits))));
}

int Fixed::toInt(void) const {
	return((int)(this->getRawBits() * (pow(2, -_fBits))));
}
