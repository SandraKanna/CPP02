/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:04:55 by skanna            #+#    #+#             */
/*   Updated: 2024/10/29 15:14:18 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float x, const float y) : _x(x), _y(y) {
	// std::cout << "Constructor with float pair called" << std::endl;
}

Point::Point(Point const & i) : _x(i._x), _y(i._y) {
	// std::cout << "Copy constructor called" << std::endl;
}

Point::~Point() {
	// std::cout << "Destructor called" << std::endl;
}

Point & Point::operator=(Point const & i) {
	(void)i;
	return (*this);
}

Fixed const Point::getX() const {
	return (_x);
}

Fixed const Point::getY() const {
	return (_y);
}

std::ostream & operator<<(std::ostream &o , Point const & i) {
	o << i.getX().toFloat() << "," << i.getY().toFloat() << std::endl;
	return (o);
}