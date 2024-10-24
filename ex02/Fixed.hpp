/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:31:28 by skanna            #+#    #+#             */
/*   Updated: 2024/10/24 18:41:03 by skanna           ###   ########.fr       */
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
	Fixed & operator>(Fixed const & to_compare);
	Fixed & operator<(Fixed const & to_compare);
	Fixed & operator>=(Fixed const & to_compare);
	Fixed & operator<=(Fixed const & to_compare);
	Fixed & operator==(Fixed const & to_compare);
	Fixed & operator!=(Fixed const & to_compare);

	//arithmetic operators
	Fixed & operator+(Fixed const & to_copy);
	Fixed & operator-(Fixed const & to_copy);
	Fixed & operator*(Fixed const & to_copy);
	Fixed & operator/(Fixed const & to_copy);

	//increment/decrement operators
	Fixed & operator++();
	Fixed & operator--();
	Fixed & operator++();
	Fixed & operator--();
	
};

std::ostream &operator<< (std::ostream & o, Fixed const & i);

# endif

/*
Add public member functions to overload these operators:
• The 6 comparison operators: >, <, >=, <=, == and !=.
• The 4 arithmetic operators: +, -, *, and /.
• The 4 increment/decrement (pre-increment and post-increment, pre-decrement and
post-decrement) operators, that will increase or decrease the fixed-point value from
the smallest representable ϵ such as 1 + ϵ > 1

*/