/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:04:05 by hyeongki          #+#    #+#             */
/*   Updated: 2023/01/11 13:03:17 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

int	main(void)
{
	std::cout << std::endl << "==================" << std::endl;
	std::cout << "[ AForm low test ]" << std::endl;
	try {
		for (int i = 149; i <= 151; ++i) {
			AForm form("test", i, 1);
		}
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "==================" << std::endl;
	try {
		for (int i = 149; i <= 151; ++i) {
			AForm form("test", 1, i);
		}
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "==================";
	std::cout << std::endl << "[ AForm high test ]" << std::endl;
	try {
		for (int i = 2; i >= 0; --i) {
			AForm form("test", 1, i);
		}
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "==================" << std::endl;
	try {
		for (int i = 2; i >= 0; --i) {
			AForm form("test", i, 1);
		}
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "==================" << std::endl;
	std::cout << "[ AForm Sign test ]" << std::endl;
	try {
		Bureaucrat bureaucrat("🙂 smile man", 42);
		AForm form("🧾 paper", 40, 40);
		bureaucrat.increaseGrade();
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "==================" << std::endl;
	try {
		Bureaucrat bureaucrat("🙂 smile man", 42);
		AForm form("🧾 paper", 40, 40);
		bureaucrat.increaseGrade(2);
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
