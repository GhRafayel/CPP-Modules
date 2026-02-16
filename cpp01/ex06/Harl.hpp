/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 14:32:52 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/08 14:32:54 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
    public:
        Harl(char *str);
        ~Harl(void);
        void    write_message(void);
    private:
        int         lev_index;
        std::string level[4];
        std::string message[4];
};