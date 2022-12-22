/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 20:48:41 by hyeongki          #+#    #+#             */
/*   Updated: 2022/12/22 17:06:52 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::SetInfo(void)	
{
	std::cout << "enter first name:" << std::endl;	
	std::getline(std::cin, this->first_name);
	std::cout << "enter last name:" << std::endl;	
	std::getline(std::cin, this->last_name);
	std::cout << "enter nickname:" << std::endl;	
	std::getline(std::cin, this->nickname);
	std::cout << "enter phone number:" << std::endl;	
	std::getline(std::cin, this->phone_number);
	std::cout << "enter darkest secret:" << std::endl;	
	std::getline(std::cin, this->darkest_secret);
}

void Contact::PrintField(std::string field)
{
	if (field.empty())
	{
		for (int i = 0; i < 10; i++)
			std::cout << " ";
	}	
	else if (field.length() <= 10)
	{
		for (size_t i = 0; i < 10 - field.length(); i++)
			std::cout << " ";
		std::cout << field;
	}
	else
	{
		for (int i = 0; i < 9; i++)
			std::cout << field[i];
		std::cout << ".";
	}
	std::cout << "|";
}

void	Contact::PrintFieldDetail(void)
{
	std::cout << "first name: " << this->first_name << std::endl;
	std::cout << "last name: " << this->last_name << std::endl;
	std::cout << "nickname: " << this->nickname << std::endl;
	std::cout << "phone number: " << this->phone_number << std::endl;
	std::cout << "darkest secret: " << this->darkest_secret << std::endl;
}

void	Contact::PrintInfo(void)
{
	PrintField(this->first_name);
	PrintField(this->last_name);
	PrintField(this->nickname);
	std::cout << std::endl;
}
