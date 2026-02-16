/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 13:56:14 by rghazary          #+#    #+#             */
/*   Updated: 2025/07/30 13:56:15 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
    public:
        Contact contacts[8];
        bool    value;
        
        PhoneBook ();
        ~PhoneBook();
        void    add(Contact *item);
        void    search(PhoneBook phonebook, int index);
};

#endif
