/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 13:54:56 by rghazary          #+#    #+#             */
/*   Updated: 2025/09/19 13:54:57 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
  
    Data d;
    d.value = 42;
    d.name = "Name: Vienna 42\n";
    d.status = "Status: The best compus\n";

    Data * ptr;
    uintptr_t raws = Serializer::serialize(&d);

    ptr = Serializer::deserialize(raws);

    std::cout << "Original pointer : " << &d << std::endl;
    std::cout << "After deserialize: " << ptr << std::endl;

    std::cout << ptr->name << ptr->status <<  "Value: " << ptr->value << std::endl;

    std::cout << d.name << d.status <<  "Value: " << d.value << std::endl;

    if (ptr == &d)
        std::cout << "✅ Success! Same pointer recovered." << std::endl;
    else
        std::cout << "❌ Error! Pointer mismatch." << std::endl;
    return 0;
}