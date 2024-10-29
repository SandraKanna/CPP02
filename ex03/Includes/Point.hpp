/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:59:37 by skanna            #+#    #+#             */
/*   Updated: 2024/10/29 15:04:53 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <iostream>
# include <cmath>

# define GREEN "\033[32m"
# define RED "\033[31m"
# define YELLOW "\033[33m"
# define RESET "\033[0m"

class Point {
private:
	Fixed const _x;
	Fixed const _y;

public:
	Point();
	~Point();
	Point(const float x, const float y);
	Point(Point const & i);
	Point & operator=(Point const & i);
	Fixed const getX(void) const;
	Fixed const getY(void) const;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);
std::ostream & operator<<(std::ostream &o , Point const & i);

# endif