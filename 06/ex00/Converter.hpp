/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:28:36 by hyeongki          #+#    #+#             */
/*   Updated: 2023/01/12 17:23:24 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTOR_HPP
# define CONVERTOR_HPP

# include <iostream>

class Converter
{
	private:
		char*		inputValue;
		char		charValue;
		int			intValue;
		float		floatValue;
		double		doubleValue;
		void		convertChar(char* inputValue);
		void		convertInt(char* inputValue);
		void		convertFloat(char* inputValue);
		void		convertDouble(char* inputValue);

	public:
		Converter(void);
		Converter(char* inputValue);
		Converter(const Converter& origin);
		~Converter(void);
		Converter&	operator=(const Converter& origin);
		char*	getInputValue(void) const;
		char		getCharValue(void) const;
		int			getIntValue(void) const;
		float		getFloatValue(void) const;
		double		getDoubleValue(void) const;
		void		setInputValue(char* inputValue);
		void		setCharValue(char charValue);
		void		setIntValue(int intValue);
		void		setFloatValue(float floatValue);
		void		setDoubleValue(double doubleValue);
		void		convert(char* inputValue);
		class		
};

#endif
