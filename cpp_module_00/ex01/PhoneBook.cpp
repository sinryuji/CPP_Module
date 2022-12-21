/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 21:11:05 by hyeongki          #+#    #+#             */
/*   Updated: 2022/12/21 18:46:07 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
}

void	PhoneBook::AddContact(void)
{
	this->contacts[this->index % 8].SetInfo();
	index++;
}

void	PhoneBook::PrintContacts(void)
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     index|first name| last_name|  nickname|" << std::endl;
	for (int i = 1; i < 9; i++)
	{
		std::cout << "|         " << i << "|";
		this->contacts[i - 1].PrintInfo();
	}
	std::cout << "---------------------------------------------" << std::endl;
}

void	PhoneBook::SearchContact(void)
{
	int index;

	PrintContacts();
	std::cout << "enter index number(0: quit):" << std::endl;
	std::cin >> index;
	if (std::cin.fail())
	{
		std::cerr << "wrong input value" << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
	}
	else if (index == 0)
		return;
	else if (index < 1 || index > 8)
		std::cerr << "index out of range!" << std::endl;
	else
		this->contacts[index - 1].PrintFieldDetail();
}
