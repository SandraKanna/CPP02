/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandra <sandra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:34:46 by skanna            #+#    #+#             */
/*   Updated: 2024/10/28 12:25:17 by sandra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		
		// std::cout << b << std::endl;
		
		// std::cout << Fixed::max( a, b ) << std::endl;
		
	}
	{
		std::cout << "\n----------------------\n" << std::endl;
		Fixed  a;
		std::cout << "a: " << a << std::endl;
		Fixed b(2);
		std::cout << "b: " << b << std::endl;
		Fixed c(2.5f);
		std::cout << "c: " << c << std::endl;
		Fixed d(c);
		std::cout << "d: " << d << std::endl;
		
		std::cout << std::endl;

		a = b;
		std::cout << "a: " << a << std::endl;
		
		std::cout << std::endl;
		Fixed e(Fixed(1) + Fixed (2));
		std::cout << "e: " << e << std::endl;
		std::cout << std::endl;
		
	}
	return 0;
}
