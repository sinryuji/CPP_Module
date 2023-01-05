/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 18:51:30 by hyeongki          #+#    #+#             */
/*   Updated: 2023/01/05 23:53:31 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
 * -------------------------- Constructor -----------------------------
 */

Animal::Animal(void) : type("Animal")
{
	std::cout << this->type << " constructor called" << std::endl;
}

Animal::Animal(const Animal& origin) : type(origin.getType())
{
	std::cout << this->type << " copy constructor called" << std::endl;
}

/*
 * -------------------------- Destructor -----------------------------
 */

Animal::~Animal(void)
{
	std::cout << this->type << " destructor called" << std::endl;
}

/*
 * -------------------------- Operator -----------------------------
 */

Animal& Animal::operator=(const Animal& origin)
{
	if (this != &origin)
		this->type = origin.getType();
	return *this;
}

/*
 * -------------------------- Function -----------------------------
 */

void	Animal::makeSound(void) const
{
	std::cout << "This instance is Animal" << std::endl;
}

std::string	Animal::getType(void) const
{
	return this->type;
}
