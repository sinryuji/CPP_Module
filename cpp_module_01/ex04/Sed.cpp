/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 12:35:06 by hyeongki          #+#    #+#             */
/*   Updated: 2022/12/26 15:33:20 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string& filename, std::string& s1, std::string& s2) : filename(filename), s1(s1), s2(s2) {}

Sed::~Sed(void) {}

void	Sed::Replace(void)
{
	std::string	line;

	std::ifstream ifs(this->filename, std::ios::in);
	if (ifs.fail() == true)
		PrintError("file opne failed");
	while (true)
	{
		std::getline(ifs, line);
		if (line.empty() == true)
			break;
		Replaceline(line);
	}
}

void	Sed::Replaceline(std::string line)
{
	std::cout << line << std::endl;
}

void	Sed::PrintError(std::string msg)
{
	std::cerr << msg << std::endl;
	exit(1);
}
