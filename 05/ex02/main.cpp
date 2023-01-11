/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:04:05 by hyeongki          #+#    #+#             */
/*   Updated: 2023/01/11 22:35:49 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	try {
		ShrubberyCreationForm scf = ShrubberyCreationForm("SCF");
		std::cout << scf << std::endl;
		Bureaucrat bur = Bureaucrat();
		scf.execute(bur);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n====================================\n" << std::endl;

	try {
		ShrubberyCreationForm scf = ShrubberyCreationForm("SCF");
		std::cout << scf << std::endl;
		Bureaucrat bur = Bureaucrat("test", 145);
		bur.signForm(scf);
		scf.execute(bur);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n====================================\n" << std::endl;

	try {
		ShrubberyCreationForm scf = ShrubberyCreationForm("SCF");
		std::cout << scf << std::endl;
		Bureaucrat bur = Bureaucrat("test", 137);
		bur.signForm(scf);
		scf.execute(bur);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n====================================" << std::endl;
	std::cout << "====================================\n" << std::endl;

	try {
		RobotomyRequestForm rrf = RobotomyRequestForm("RRF");
		std::cout << rrf << std::endl;
		Bureaucrat bur = Bureaucrat();
		rrf.execute(bur);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n====================================\n" << std::endl;

	try {
		RobotomyRequestForm rrf = RobotomyRequestForm("RRF");
		std::cout << rrf << std::endl;
		Bureaucrat bur = Bureaucrat("test", 72);
		bur.signForm(rrf);
		rrf.execute(bur);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n====================================\n" << std::endl;

	try {
		RobotomyRequestForm rrf = RobotomyRequestForm("RRF");
		std::cout << rrf << std::endl;
		Bureaucrat bur = Bureaucrat("test", 45);
		bur.signForm(rrf);
		rrf.execute(bur);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n====================================\n" << std::endl;
	return 0;
}
