/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 10:46:34 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/08 10:46:35 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(char **argv)
{
	this->value = false;
	this->file_name = argv[1];
	this->s1 = argv[2];
	this->s2 = argv[3];
	this->new_file_name = file_name + ".replace";
}

Replace::~Replace(void)
{
	std::cout << " Distractor: " << std::endl;
}

void    Replace::create_new_file(void)
{
	if (this->value) return ;
	std::ofstream  out_file(new_file_name);

	if (!out_file)
	{
		std::cout << "Error: Failed to create file 'out_file.replace'. Check permissions or disk space." << std::endl;
		value = true;
		return ;
	}
	out_file << file_content;
}

void Replace::read_file(void)
{
	std::ifstream   file(file_name);
	std::string     buffer;

	if (!file.is_open())
	{
		std::cout << "Error: Could not open file. Check if the filename is correct or permissions are insufficient." << std::endl;
		this->value = true;
		return ;
	}
	while (std::getline(file, buffer))
	{
		this->file_content += buffer + "\n";
		if (file.eof()) return ;
	}
}

void	Replace::replace_string(void)
{
	if (this->value) return ;
	if (s1.length() == 0)
	{
		std::cout << "Error: 's1' cannot be empty. Please provide a valid value." << std::endl;
		value = true;
		return ;
	}
	std::string new_file_content;
	size_t 		s1_len = s1.length();
	size_t		index = file_content.find(s1);

	if (index == std::string::npos)
	{
		std::cout << "No changes required: The file is already up to date." << std::endl;
		value = true;
		return ;
	}
	while (index != std::string::npos)
	{
		if (index > 0)
		{
			new_file_content += file_content.substr(0, index) + s2;
			file_content = file_content.substr(index + s1_len, file_content.length());
		}
		else
		{
			new_file_content += s2;
			file_content = file_content.substr(s1_len, file_content.length() - s1_len);
		}
		index = file_content.find(s1);
	}
	file_content = new_file_content + file_content;
}

