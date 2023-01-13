/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:59:12 by hyeongki          #+#    #+#             */
/*   Updated: 2023/01/13 17:11:51 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <fstream>

class Converter
{
	private:
		Converter(void);
		char	toChar;
		int		toInt;
		float	toFloat;
		double	toDouble;
		bool	isChar(const std::string& input);
		bool	isFloat(const std::string& input);
		bool	isPseudo(const std::string& input);

	public:
		Converter(const std::string& input);
		Converter(const Converter& origin);
		~Converter(void);
		Converter& operator=(const Converter& origin);
		char	getToChar(void) const;
		int		getToInt(void) const;
		float	getToFloat(void) const;
		double	getToDouble(void) const;
		void	setToChar(char toChar);
		void	setToInt(int toInt);
		void	setToFloat(float toFloat);
		void	setToDouble(double toDouble);
		void	convert(const std::string& input);
};

std::ostream&	operator<<(std::ostream& out, const Converter& converter);

#endif
