/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:34:46 by skanna            #+#    #+#             */
/*   Updated: 2024/10/22 16:06:38 by skanna           ###   ########.fr       */
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

//destructor
Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

// assignment overloading operator
Fixed & Fixed::operator=(Fixed const & to_copy) {
	std::cout << "Assignment operator called\n";
	if ( this != &to_copy) {
		this->_value = to_copy.getRawBits();
	}
	return (*this);
}

// Accessors
int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called\n";
	return (_value);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called\n";
	this->_value = raw;
}

// non member overloading operator
std::ostream & operator<<(std::ostream & o, Fixed const &i) {
	o << i.getRawBits();
	return (o);
}
