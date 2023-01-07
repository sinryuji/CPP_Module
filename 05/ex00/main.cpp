/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:04:05 by hyeongki          #+#    #+#             */
/*   Updated: 2023/01/06 16:16:36 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try {
//		Bureaucrat b1 = Bureaucrat();
		Bureaucrat b2 = Bureaucrat("b2", 151);
		std::cout << "in?" << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
//		Bureaucrat b3 = Bureaucrat("b3", 1);
//		Bureaucrat b4 = Bureaucrat("b4", 100);
//		b4.increaseGrade();
//		std::cout << b4 << std::endl;
//		b3.increaseGrade();
//		std::cout << b3 << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
