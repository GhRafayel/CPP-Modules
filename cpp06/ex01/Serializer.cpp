/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 13:54:56 by rghazary          #+#    #+#             */
/*   Updated: 2025/09/19 13:54:57 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::~Serializer() {}

uintptr_t   Serializer::serialize(Data * pnt) {
    return reinterpret_cast<uintptr_t>(pnt);
}

Data * Serializer::deserialize(uintptr_t val) {
    return reinterpret_cast<Data *>(val);
}