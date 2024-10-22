/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:31:28 by skanna            #+#    #+#             */
/*   Updated: 2024/10/22 16:41:27 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
private:
	int	_value;
	static int const _fBits;

public:
	Fixed(); //default
	Fixed(Fixed const & to_copy); //copy constructor
	Fixed(int const & i); //constructor with int parameter
	Fixed(float const & f); //constructor with float parameter
	~Fixed(); //default
	Fixed & operator=(Fixed const & to_copy); //assignment operator
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
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


 if you need to move around among 1/2, 1/3, 1/4, etc., 
 you should clearly be storing only the denomsinator 
 and regenerating 1.0/denom whenever you need the fraction as a float. 
	
#include <ieee754.h>
#define LOG2_10 3.321928095
 
#define flt_zero(x) (fabs(x) < EPSILON)
 
int max_digs_rt = 3; // maximum # of 0's right of decimal before using scientific notation
int max_digs_lf = 5;  // max # of digits left of decimal
 
void print_real(double r, int width, int dec)
{
    int mag;
    double fpart, temp;
    char format[8];
    char num_format[3] = {'l',0,0};
    union ieee754_double *dl;
 
    dl = (union ieee754_double*)&r;
    mag = (dl->ieee.exponent - IEEE754_DOUBLE_BIAS) / LOG2_10;
    if (r == 0)
        mag = 0;
    if ((mag > max_digs_lf-1) || (mag < -max_digs_rt)) {
        num_format[1] = 'e';
        temp = r/pow(10, mag);      //see if number will have a decimal
        fpart = temp - floor(temp); // when written in scientific notation
    }
    else {
        num_format[1] = 'f';
        fpart = r - floor(r);
    }
    if (flt_zero(fpart))
        dec = 0;
    if (width == 0) {
        snprintf(format, 8, "%%.%d%s", dec, num_format);
    }
    else {
        snprintf(format, 8, "%%%d.%d%s", width, dec, num_format);
    }
    printf(format, r);
}
*/