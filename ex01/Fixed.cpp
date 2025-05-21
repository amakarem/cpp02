/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 21:35:15 by aelaaser          #+#    #+#             */
/*   Updated: 2025/05/21 17:52:21 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fract = 8;

Fixed::Fixed(void)
{
	val = 0;
	std::cout << "Default constructor called\n";
}
Fixed::Fixed(int v)
{
	val = v << Fixed::fract;;
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(float v)
{
	val = roundf(v * (1 << Fixed::fract));
	std::cout << "Float constructor called\n";
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(Fixed const &cpy)
{
	std::cout << "Copy constructor called\n";
	*this = cpy;
}

Fixed &Fixed::operator = (Fixed const &cpy)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &cpy)
		this->val = cpy.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->val);
}

void	Fixed::setRawBits(const int raw)
{
	this->val = raw;
}
int	Fixed::toInt(void) const
{
	return (this->val >> Fixed::fract);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->val / (float)(1 << Fixed::fract));
}

std::ostream	&operator<<(std::ostream &str, Fixed const &nbr)
{
	return(str << nbr.toFloat());
}
