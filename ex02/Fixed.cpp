/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:34:46 by skanna            #+#    #+#             */
/*   Updated: 2024/10/28 16:33:30 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fBits = 8;
	
//constructors
Fixed::Fixed() : _value(0) {
	// std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed const & to_copy) {
	// std::cout << "Copy constructor called\n";
	*this = to_copy;
}

Fixed::Fixed(int const i) {
	// std::cout << "Int constructor called\n";
	//shift of 8 bits to the left 
	//equivalent to multiply _value * 2^8 (=256)
	_value = i << _fBits;
}

Fixed::Fixed(float const f) {
	// std::cout << "Float constructor called\n";
	// the bits of a float can't be manipulated directly, 
	//so we multiply _value * (1 << _fBits) which is = 2^8
	_value = roundf(f * (1 << _fBits));
}

// destructor
Fixed::~Fixed() {
	// std::cout << "Destructor called\n";
}
