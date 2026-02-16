/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 13:54:56 by rghazary          #+#    #+#             */
/*   Updated: 2025/09/19 13:54:57 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include "Data.hpp"

typedef unsigned long uintptr_t;

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &);
		Serializer & operator = (const Serializer &);
	public:
		~Serializer();
		static uintptr_t	serialize(Data* ptr);
		static Data *		deserialize(uintptr_t raw);
};

#endif

