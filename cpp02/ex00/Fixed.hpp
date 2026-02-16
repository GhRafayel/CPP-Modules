/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 16:05:48 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/08 16:05:49 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXET_HPP
#define FIXET_HPP

#include <iostream>

class Fixed
{
    public:
        Fixed(void);
        Fixed(const Fixed & obj);
        ~Fixed(void);
		Fixed & operator = (const Fixed & obj);
	
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
    private:
        int                 _value;
        static const int    _fractional_bits = 8;
};

#endif