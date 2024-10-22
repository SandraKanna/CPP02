/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:34:46 by skanna            #+#    #+#             */
/*   Updated: 2024/10/22 15:49:09 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

int main( void )
{
	Fixed a; //calls the default constructor
	Fixed b(a); //calls the copy constructor to assign the value of the instance 'a' to 'b'
	Fixed c; //calls the default constructor
	c = b; //calls the assignment operator to assign the value of b to c
	
	//printing the value of each instance, accessing private values via the accessor method getRawBits
	std::cout << "\n----------------------\n" << std::endl;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	std::cout << "\n----------------------\n" << std::endl;
	a.setRawBits(10); //overwriting the value of 'a' via the accessor setRawBits
	std::cout << "a: " << a.getRawBits() << std::endl; //prints new value of 'a'
	Fixed d(a); //copying the value of 'a' to a new instance 'd'
	c = d; //overwriting the value of c with the value of d via the assignment operator
	
	//printing the value of each instance thourgh the stream operator
	std::cout << "\n----------------------\n" << std::endl;
	std::cout << "outstream overload: \n" << a << std::endl << b <<  std::endl << c << std::endl << d << std::endl;
	
	std::cout << "\n----------------------\n" << std::endl;
	return (0);
}
