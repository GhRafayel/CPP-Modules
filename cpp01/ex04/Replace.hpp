/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 10:46:46 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/08 10:46:47 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>

class Replace
{
	public:
		Replace(char **argv);
		~Replace(void);
		bool	value;
		void	create_new_file(void);
		void	read_file(void);
		void	replace_string(void);
	private: 
		std::string		s1;
		std::string		s2;
		std::string		file_name;
		std::string		new_file_name;
		std::string		file_content;
		std::ofstream	out_file;
};

#endif

