/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 21:27:49 by aelaaser          #+#    #+#             */
/*   Updated: 2025/05/16 21:48:57 by aelaaser         ###   ########.fr       */
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
		~Fixed(void);
		Fixed(Fixed const &cpy);
		Fixed &operator = (Fixed const &cpy);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
