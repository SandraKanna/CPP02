/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:31:28 by skanna            #+#    #+#             */
/*   Updated: 2024/10/28 14:05:56 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
//define EPSILON

class Fixed {
private:
	int	_value;
	static int const _fBits;

public:
	Fixed(); //default
	Fixed(Fixed const & to_copy); //copy constructor
	Fixed(int const i);
	Fixed(float const f);
	~Fixed(); //default
	Fixed & operator=(Fixed const & to_copy); //assignment operator
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	
	//comparison operators
	bool operator>(Fixed const & i);
	bool operator<(Fixed const & i);
	bool operator>=(Fixed const & i);
	bool operator<=(Fixed const & i);
	bool operator==(Fixed const & i);
	bool operator!=(Fixed const & i);

	//arithmetic operators
	Fixed operator+(Fixed const & i);
	Fixed operator-(Fixed const & i);
	Fixed operator*(Fixed const & i);
	Fixed operator/(Fixed const & i);

	//increment/decrement operators
	Fixed & operator++(); //prefix
	Fixed operator++(int); //postfix
	Fixed & operator--(); //prefix
	Fixed operator--(int); //postfix
	
	//overloaded member functions (static dont need a specific instance)
	static Fixed & min(Fixed & a, Fixed & b);
	static Fixed const & min(Fixed const & a, Fixed const & b); //only read access
	static Fixed & max(Fixed & a, Fixed & b);
	static Fixed const & max(Fixed const & a, Fixed const & b);//only read access
	
};

std::ostream &operator<< (std::ostream & o, Fixed const & i);

# endif

/*
• A static member function min that takes as parameters two references on fixed-point
numbers, and returns a reference to the smallest one.
• A static member function min that takes as parameters two references to constant
fixed-point numbers, and returns a reference to the smallest one.
• A static member function max that takes as parameters two references on fixed-point
numbers, and returns a reference to the greatest one.
• A static member function max that takes as parameters two references to constant
fixed-point numbers, and returns a reference to the greatest one

*/