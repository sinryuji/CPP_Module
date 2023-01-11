/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:55:21 by hyeongki          #+#    #+#             */
/*   Updated: 2023/01/11 21:06:50 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		static const int	requiredSign = 72;
		static const int	requiredExec = 45;
		std::string			target;	

	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& origin);
		~RobotomyRequestForm(void);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& origin);
		std::string	getTarget(void);
		void		execute(Bureaucrat const& executor);
};

#endif
