/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 18:17:49 by hyeongki          #+#    #+#             */
/*   Updated: 2022/12/16 18:17:53 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string toUpperString(std::string str)
{
	std::string ret = "";

	for (size_t i = 0; i < str.length(); i++)
	{
		ret += std::toupper(str[i]);
	}

	return ret;
}

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		std::string ret = "";
		for (int i = 1; i < argc; i++)
		{
			ret += toUpperString(argv[i]);
		}
		std::cout << ret << std::endl;
	}

	return 0;
}
