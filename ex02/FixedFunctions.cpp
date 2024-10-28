/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedFunctions.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:00:25 by skanna            #+#    #+#             */
/*   Updated: 2024/10/28 14:06:07 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed & Fixed::min(Fixed & a, Fixed & b) {
	if (a < b)
		return (a);
	return (b);
}

Fixed const & Fixed::min(Fixed const & a, Fixed const & b) {
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed & Fixed::max(Fixed & a, Fixed & b) {
	if (a > b)
		return (a);
	return (b);
}

Fixed const & Fixed::max(Fixed const & a, Fixed const & b) {
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}
