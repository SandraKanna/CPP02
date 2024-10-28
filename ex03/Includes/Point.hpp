/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:59:37 by skanna            #+#    #+#             */
/*   Updated: 2024/10/28 17:22:47 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
private:
	Fixed const _x;
	Fixed const _y;

public:
	Point();
	Point(const float x, const float y);
	Point(Point const & i);
	Point & operator=(Point const & i);
	~Point();
	Fixed const getX(void) const;
	Fixed const getY(void) const;

};


# endif