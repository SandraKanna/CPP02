/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedAccessors.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:47:01 by skanna            #+#    #+#             */
/*   Updated: 2024/10/25 16:47:18 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::getRawBits(void) const {
	return (_value);
}

void Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

float Fixed::toFloat(void) const {
	//divide by 2^8 to get the initial float value
	return((float)(this->getRawBits() / (float)(1 << _fBits)));
}

int Fixed::toInt(void) const {
	//shift 8 bits to the right to get the initial value
	//we could also divide by 1 >> _fBits (eq to 1/256)
	return((int)(this->getRawBits() >> _fBits));
}
