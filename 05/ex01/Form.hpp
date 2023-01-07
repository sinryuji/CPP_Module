/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 14:00:10 by hyeongki          #+#    #+#             */
/*   Updated: 2023/01/07 14:12:06 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "bureaucrat.hpp"

class Form
{
	private:
		const std::string	name;
		bool				signFlag;
		const int			requiredSign;
		const int			requiredExecute;

	public:
		Form(void);
		Form(const Form& origin);
		~Form(void);
		Form&	operator=(const Form& origin);
		void	beSigned(Bureaucrat& bureaucrat);
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what(void) const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what(void) const throw();
		};
};

std::ostream&	operator<<(std::ostream& out, const Form& origin);

#endif
