/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:31:28 by skanna            #+#    #+#             */
/*   Updated: 2024/10/29 15:32:05 by skanna           ###   ########.fr       */
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
	Fixed(int const i);
	Fixed(float const f);
	~Fixed(); //default
	Fixed & operator=(Fixed const & to_copy); //assignment operator
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	
	//comparison operators
	bool operator>(Fixed const & i) const;
	bool operator<(Fixed const & i) const;
	bool operator>=(Fixed const & i) const;
	bool operator<=(Fixed const & i) const;
	bool operator==(Fixed const & i) const;
	bool operator!=(Fixed const & i) const;

	//arithmetic operators
	Fixed operator+(Fixed const & i) const;
	Fixed operator-(Fixed const & i) const;
	Fixed operator*(Fixed const & i) const;
	Fixed operator/(Fixed const & i) const;

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
