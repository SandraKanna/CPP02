/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:04:55 by skanna            #+#    #+#             */
/*   Updated: 2024/10/28 17:28:52 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(Point const & i) {
	*this = i;
}

Point::~Point() {}

Point & Point::operator=(Point const & i) {
	if (this != &i) {
		_x = i.getX();
		_y = i.getY();
	}
	return (*this);
}

Fixed const Point::getX() const {
	return (_x);
}

Fixed const Point::getY() const {
	return (_y);
}
