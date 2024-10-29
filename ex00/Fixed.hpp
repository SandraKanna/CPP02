/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:31:28 by skanna            #+#    #+#             */
/*   Updated: 2024/10/29 15:18:35 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
private:
	int	_value;
	static int const _fBits;

public:
	Fixed(); // Default constructor
	~Fixed(); // Default destructor
	Fixed(Fixed const & to_copy); // Copy constructor
	Fixed & operator=(Fixed const & to_copy); // Copy assignment operator
	int getRawBits(void) const; //accessor
	void setRawBits(int const raw); //accessor
};

# endif
