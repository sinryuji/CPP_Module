/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:48:55 by hyeongki          #+#    #+#             */
/*   Updated: 2023/01/11 18:40:55 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

/*
 * -------------------------- Constructor --------------------------
 */

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("shrubberyCreationForm", this->requiredSign, this->requiredExec), target("target")
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("shrubberyCreationForm", this->requiredSign, this->requiredExec), target(target)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& origin) : AForm(origin)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	validateGrade(origin.getSignGrade());
	validateGrade((origin.getExecuteGrad()));
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
	validateGrade(origin.getSignGrade());
	validateGrade((origin.getExecuteGrad()));
	if (this != &origin)
		*this = origin;
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
 * -------------------------- Function -----------------------------
 */

void	execute(Bureaucrat const& executor)
{

}
