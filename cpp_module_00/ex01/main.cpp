/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 21:46:07 by hyeongki          #+#    #+#             */
/*   Updated: 2022/12/22 18:05:47 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string	cmd;
	PhoneBook phone_book;

	while (true)
	{
		std::cout << "enter command(ADD or SEARCH or EXIT):" << std::endl;
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			phone_book.AddContact();
		else if (cmd == "SEARCH")
			phone_book.SearchContact();
		else if (cmd == "EXIT")
			break;
	}
	return 0;
}
