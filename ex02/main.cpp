/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:34:46 by skanna            #+#    #+#             */
/*   Updated: 2024/10/28 16:50:02 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	// {
	// 	Fixed a;
	// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		
	// 	std::cout << a << std::endl;
	// 	std::cout << ++a << std::endl;
	// 	std::cout << a << std::endl;
	// 	std::cout << a++ << std::endl;
	// 	std::cout << a << std::endl;
		
	// 	std::cout << b << std::endl;
		
	// 	std::cout << Fixed::max( a, b ) << std::endl;
		
	// }
	{
		std::cout << "\n----------CONSTRUCTORS------------\n" << std::endl;
		Fixed  a;
		std::cout << "a = " << a << std::endl;
		std::cout << std::endl;
		
		Fixed b(1);
		std::cout << "b = " << b << std::endl;
		std::cout << std::endl;
		
		Fixed c(2.5f);
		std::cout << "c = " << c << std::endl;
		std::cout << std::endl;
		
		Fixed d(c);
		std::cout << "d = " << d << std::endl;
		std::cout << std::endl;
		
		Fixed e(Fixed(1) + Fixed (2));
		std::cout << "e = " << e << std::endl;
		
		std::cout << "\n----------ARITHMETIC OPERATORS------------\n" << std::endl;
		a = b;
		std::cout << "a = " << a << " b = " << b << std::endl;
		std::cout << "a + b : " << (a + b) << std::endl;
		std::cout << std::endl;

		std::cout << "a = " << a << " b = " << b << std::endl;
		std::cout << "a - b : " << (a - b) << std::endl;
		std::cout << std::endl;

		std::cout << "e = " << e << " a = " << a << std::endl;
		std::cout << "e / a : " << (e / a) << std::endl;
		std::cout << std::endl;
		
		std::cout << "e = " << e << " d = " << d << std::endl;
		std::cout << "e * d : " << e * d << std::endl;
		
		std::cout << "\n----------IN/DECREMENT OPERATORS------------\n" << std::endl;
		a.setRawBits(256);
		std::cout << "a = " << a << std::endl;
		std::cout << "++a = " << ++a << std::endl;
		std::cout << "a = " << a << std::endl;
		std::cout << "a++ = " << a++ << std::endl;
		std::cout << "a = " << a << std::endl;
		std::cout << "--a = " << --a << std::endl;
		std::cout << "a = " << a << std::endl;
		std::cout << "a-- = " << a-- << std::endl;
		std::cout << "a = " << a << std::endl;
		std::cout << std::endl;

		std::cout << "\n----------COMPARISON OPERATORS------------\n" << std::endl;
		a.setRawBits(256);
		std::cout << "a = " << a << std::endl;
		std::cout << "is " << a << " == " << b << " ? " << (a == b ? 'Y' : 'N') << std::endl;
		std::cout << "is " << a << " != " << c << " ? " << (a != c ? 'Y' : 'N') << std::endl;
		std::cout << "is " << a << " < " << e << " ? " << (a < e ? 'Y' : 'N') << std::endl;
		std::cout << "is " << a << " <= " << d << " ? " << (a <= d ? 'Y' : 'N') << std::endl;
		std::cout << "is " << a << " > " << c << " ? " << (a > c ? 'Y' : 'N') << std::endl;
		std::cout << "is " << e << " >= " << d << " ? " << (e >= d ? 'Y' : 'N') << std::endl;

		std::cout << "\n------------FUNCTIONS----------\n" << std::endl;
		std::cout << "a = " << a << " e = " << e << std::endl;
		std::cout << "the max is: " << Fixed::max( a, e ) << std::endl;
		a = a * c;
		std::cout << "a = " << a << " e = " << e << std::endl;
		std::cout << "the min is: " << Fixed::min( a, e ) << std::endl;
		const Fixed f(a);
		std::cout << "f = " << f << " e = " << e << std::endl;
		std::cout << "the min is: " << Fixed::min( a, e ) << std::endl;
		std::cout << std::endl;
	}
	return (0);
}
