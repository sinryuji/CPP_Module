/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:55:21 by hyeongki          #+#    #+#             */
/*   Updated: 2023/01/11 21:05:48 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		static const int	requiredSign = 145;
		static const int	requiredExec = 137;
		std::string			target;	

	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& origin);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& origin);
		std::string	getTarget(void);
		void		execute(Bureaucrat const& executor);
};

#endif
