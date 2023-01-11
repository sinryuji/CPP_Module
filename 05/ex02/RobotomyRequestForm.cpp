/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:48:55 by hyeongki          #+#    #+#             */
/*   Updated: 2023/01/11 18:40:59 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

/*
 * -------------------------- Constructor --------------------------
 */

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("untitled", this->requiredSign, this->requiredExec), target("target")
{
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("shrubberyCreationForm", this->requiredSign, this->requiredExec), target(target)
{
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& origin) : AForm(origin)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	validateGrade(origin.getSignGrade());
	validateGrade((origin.getExecuteGrad()));
}

/*
 * -------------------------- Destructor ---------------------------
 */

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

/*
 * -------------------------- Operator -----------------------------
 */

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& origin)
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
