/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 23:50:04 by hyeongki          #+#    #+#             */
/*   Updated: 2023/01/05 23:59:31 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
 * -------------------------- Constructor -----------------------------
 */

Dog::Dog(void) : Animal()
{
	this->type = "Dog";
	std::cout << this->type << " constructor called" << std::endl;
}

Dog::Dog(const Dog& origin) : Animal(origin)
{
	this->type = origin.getType();
	std::cout << this->type << " copy constructor called" << std::endl;
}

/*
 * -------------------------- Destructor -----------------------------
 */

Dog::~Dog(void)
{
	std::cout << "Dog class " << this->type << " destructor called" << std::endl;
}

/*
 * -------------------------- Operator -----------------------------
 */

Dog& Dog::operator=(const Dog& origin)
{
	if (this != &origin)
		this->type = origin.getType();
	return *this;
}

/*
 * -------------------------- Function -----------------------------
 */

void	Dog::makeSound(void) const
{
	std::cout << "Bowwow!" << std::endl;
}
