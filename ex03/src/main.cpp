/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:34:46 by skanna            #+#    #+#             */
/*   Updated: 2024/10/29 15:14:24 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	{
		std::cout << YELLOW "For a triangle formed by:" RESET << std::endl;
		Point a(0,0);
		std::cout << "a: " << a << std::endl;
		
		Point b(5,0);
		std::cout << "b: " << b << std::endl;
		
		Point c(2.5f, 4.3f);
		std::cout << "c: " << c << std::endl;
		std::cout << std::endl;
		
		std::cout << YELLOW "Is the point P inside the triangle area?\n" RESET << std::endl;
		Point p(3, 0.3);
		std::cout << "p: " << p << std::endl;
		
		if (bsp(a, b, c, p))
			std::cout << GREEN "The point P is in the triangle" RESET << std::endl;
		else
			std::cout << RED "The point P is NOT in the triangle" RESET << std::endl;
		std::cout << std::endl;
	}

	return (0);
}
