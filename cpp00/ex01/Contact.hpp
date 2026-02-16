/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 13:55:04 by rghazary          #+#    #+#             */
/*   Updated: 2025/07/30 13:55:07 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
    private:
        std::string prompt[5];
        std::string data[5];
    public:
        bool value;
        Contact();
        ~Contact();
        void get_string();
        void drow(bool value);
        bool check_string(std::string input, int index);
};

std::string to_trim(std::string str);

#endif
