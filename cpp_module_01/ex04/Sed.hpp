/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 12:35:17 by hyeongki          #+#    #+#             */
/*   Updated: 2022/12/26 15:20:41 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>

class Sed
{
	private:
		std::string&	filename;
		std::string&	s1;
		std::string&	s2;

	public:
		Sed(std::string& filename, std::string& s1, std::string& s2);
		~Sed(void);
		void		Replace(void);
		void		Replaceline(std::string line);
		static void	PrintError(std::string msg);
	
};

#endif
