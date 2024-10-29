/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:12:54 by skanna            #+#    #+#             */
/*   Updated: 2024/10/29 15:14:21 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float   area(float *a, float *b, float*c) {
	float term1 = a[0] * (b[1] - c[1]);
	float term2 = b[0] * (c[1] - a[1]);
	float term3 = c[0] * (a[1] - b[1]);
	
	return (std::abs(term1 + term2 + term3) / 2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {

	float a_coord[] = {a.getX().toFloat(), a.getY().toFloat()};
	float b_coord[] = {b.getX().toFloat(), b.getY().toFloat()};
	float c_coord[] = {c.getX().toFloat(), c.getY().toFloat()};
	float p_coord[] = {point.getX().toFloat(), point.getY().toFloat()};
	
	float areaABC = area(a_coord, b_coord, c_coord);
	float areaPAB = area(p_coord, a_coord, b_coord);
	float areaPBC = area(p_coord, b_coord, c_coord);
	float areaPCA = area(p_coord, c_coord, a_coord);
	
	if (areaPAB + areaPBC + areaPCA != areaABC || !areaPAB || !areaPBC || !areaPCA)
		return (false);
	return (true);
}

/*
area with delta:

1/2 * |ax(by - cy) + bx(cy - ay) + cx(ay - by)|

*/