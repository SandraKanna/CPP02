/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:34:46 by skanna            #+#    #+#             */
/*   Updated: 2024/10/28 16:55:09 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fBits = 8;
	
Fixed::Fixed() : _value(0) {}

Fixed::Fixed(Fixed const & to_copy) { *this = to_copy; }

Fixed::Fixed(int const i) { _value = i << _fBits; }

Fixed::Fixed(float const f) { _value = roundf(f * (1 << _fBits)); }

Fixed::~Fixed() {}
