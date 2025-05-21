/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 21:27:49 by aelaaser          #+#    #+#             */
/*   Updated: 2025/05/21 18:32:46 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	private:
		int	val;
		static const int fract;
	public:
		Fixed(void);
		Fixed(int v);
		Fixed(float v);
		Fixed(Fixed const &cpy);
		~Fixed(void);
		Fixed	&operator = (Fixed const &cpy);
		bool	operator > (Fixed fixed) const;
		bool	operator < (Fixed fixed) const;
		bool	operator >= (Fixed fixed) const;
		bool	operator <= (Fixed fixed) const;
		bool	operator == (Fixed fixed) const;
		bool	operator != (Fixed fixed) const;
		float	operator + (Fixed fixed) const;
		float	operator - (Fixed fixed) const;
		float	operator * (Fixed fixed) const;
		float	operator / (Fixed fixed) const;
		Fixed	operator ++ ();
		Fixed	operator -- ();
		Fixed	operator ++ (int);
		Fixed	operator -- (int);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
};

std::ostream	&operator<<(std::ostream &str, Fixed const &nbr);

#endif
