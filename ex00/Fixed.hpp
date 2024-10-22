/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:31:28 by skanna            #+#    #+#             */
/*   Updated: 2024/10/22 15:08:12 by skanna           ###   ########.fr       */
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
	int getRawBits(void) const; // Accessors to private member
	void setRawBits(int const raw); // Accessors to private member
};

std::ostream &operator<< (std::ostream & o, Fixed const & i);

# endif
