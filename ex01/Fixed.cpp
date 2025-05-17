/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 21:35:15 by aelaaser          #+#    #+#             */
/*   Updated: 2025/05/17 21:10:05 by aelaaser         ###   ########.fr       */
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
	val = v;
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(float v)
{
	val = v;
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
	return (trunc(this->val));
}

float	Fixed::toFloat(void) const
{
	return (this->val);
}

std::ostream	&operator<<(std::ostream &str, Fixed const &nbr)
{
	return(str << nbr.toFloat());
}
