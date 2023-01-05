/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 23:50:04 by hyeongki          #+#    #+#             */
/*   Updated: 2023/01/06 00:43:56 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
 * -------------------------- Constructor -----------------------------
 */

Cat::Cat(void) : Animal()
{
	this->type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& origin) : Animal(origin)
{
	this->type = origin.getType();
	std::cout << this->type << " copy constructor called" << std::endl;
}

/*
 * -------------------------- Destructor -----------------------------
 */

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

/*
 * -------------------------- Operator -----------------------------
 */

Cat& Cat::operator=(const Cat& origin)
{
	if (this != &origin)
		this->type = origin.getType();
	return *this;
}

/*
 * -------------------------- Function -----------------------------
 */

void	Cat::makeSound(void) const
{
	std::cout << "Meow!" << std::endl;
}
