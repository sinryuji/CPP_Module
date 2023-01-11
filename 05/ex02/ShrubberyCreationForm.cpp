/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:48:55 by hyeongki          #+#    #+#             */
/*   Updated: 2023/01/11 16:49:41 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
 * -------------------------- Constructor --------------------------
 */

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& origin)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

/*
 * -------------------------- Destructor ---------------------------
 */

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

/*
 * -------------------------- Operator -----------------------------
 */

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& origin)
{
	if (this != &origin)
	{
	}
	return *this;
}

/*
 * -------------------------- Getter -------------------------------
 */

/*
 * -------------------------- Setter -------------------------------
 */

/*
 * -------------------------- Overriding ---------------------------
 */

/*
 * -------------------------- Overriding ---------------------------
 */

/*
 * -------------------------- Function -----------------------------
 */
