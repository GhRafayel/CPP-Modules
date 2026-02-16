/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 14:22:59 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/08 14:23:01 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
    public:
        Harl(void);
        ~Harl(void);
        void    complain(std::string level);
        void    defaul();
    private :
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
};

#endif
