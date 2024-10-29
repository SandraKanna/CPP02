/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedAccessors.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:47:01 by skanna            #+#    #+#             */
/*   Updated: 2024/10/28 17:26:29 by skanna           ###   ########.fr       */
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
	return((float)(this->getRawBits() / (float)(1 << _fBits)));
}

int Fixed::toInt(void) const {
	return((int)(this->getRawBits() >> _fBits));
}
