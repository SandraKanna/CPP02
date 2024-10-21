/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandra <sandra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:31:28 by skanna            #+#    #+#             */
/*   Updated: 2024/10/22 00:11:22 by sandra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
private:
	int	_value;
	static int const _fBits; // Stores the number of fractional bits (always 8)

public:
	Fixed(); // Default constructor
	Fixed(Fixed const & to_copy); // Copy constructor
	Fixed & operator=(Fixed const & to_copy); // Copy assignment operator
	~Fixed(); // Default destructor
	// Accessors
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

std::ostream &operator<< (std::ostream & o, Fixed const & i);

# endif

/*
My First Class in Orthodox Canonical Form

A floating point number in IEEE 754 has: a sign, an exponent (powers of 2) and a mantissa significant digits)
For Equality comparisons: Use a small tolerance (like EPSILON) 

# include <ieee754.h>
#define EPSILON 1.0e-7 
#define flt_equals(a, b) (fabs((a)-(b)) < EPSILON)

number = (-1)^sign * 2^(exponent - bias) * (1 + mantissa)

*/