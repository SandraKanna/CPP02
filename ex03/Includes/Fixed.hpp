/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:31:28 by skanna            #+#    #+#             */
/*   Updated: 2024/10/28 17:28:23 by skanna           ###   ########.fr       */
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
	Fixed();
	Fixed(Fixed const & to_copy);
	Fixed(int const i);
	Fixed(float const f);
	~Fixed();
	Fixed & operator=(Fixed const & to_copy);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	
	bool operator>(Fixed const & i) const;
	bool operator<(Fixed const & i) const;
	bool operator>=(Fixed const & i) const;
	bool operator<=(Fixed const & i) const;
	bool operator==(Fixed const & i) const;
	bool operator!=(Fixed const & i) const;

	Fixed operator+(Fixed const & i) const;
	Fixed operator-(Fixed const & i) const;
	Fixed operator*(Fixed const & i) const;
	Fixed operator/(Fixed const & i) const;

	Fixed & operator++();
	Fixed operator++(int);
	Fixed & operator--();
	Fixed operator--(int);
	
	static Fixed & min(Fixed & a, Fixed & b);
	static Fixed const & min(Fixed const & a, Fixed const & b);
	static Fixed & max(Fixed & a, Fixed & b);
	static Fixed const & max(Fixed const & a, Fixed const & b);
};

std::ostream &operator<< (std::ostream & o, Fixed const & i);

# endif
