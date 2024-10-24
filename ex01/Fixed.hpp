/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:31:28 by skanna            #+#    #+#             */
/*   Updated: 2024/10/24 18:12:05 by skanna           ###   ########.fr       */
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
	Fixed(int const i); //constructor with int parameter
	Fixed(float const f); //constructor with float parameter
	~Fixed(); //default
	Fixed & operator=(Fixed const & to_copy); //assignment operator
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const; //member function to convert to float
	int toInt(void) const; //member function to convert to int
};

std::ostream &operator<< (std::ostream & o, Fixed const & i);

# endif
