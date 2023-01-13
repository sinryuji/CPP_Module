/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:00:06 by hyeongki          #+#    #+#             */
/*   Updated: 2023/01/13 17:14:27 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

/*
 * -------------------------- Constructor --------------------------
 */

Converter::Converter(void) {}

Converter::Converter(const Converter& origin)
{
	*this = origin;
}

Converter::Converter(const std::string& input)
{
	this->setToChar(0);
	this->setToInt(0);
	this->setToFloat(0);
	this->setToDouble(0);
	convert(input);
}

/*
 * -------------------------- Destructor ---------------------------
 */

Converter::~Converter(void) {}

/*
 * -------------------------- Operator -----------------------------
 */

Converter& Converter::operator=(const Converter& origin)
{
	if (this != &origin)
	{
		*this = origin;
	}
	return *this;
}

std::ostream&	operator<<(std::ostream& out, const Converter& converter)
{
	out << "char: " << converter.getToChar() << "\n"
		<< "int: " << converter.getToInt() << "\n"
		<< "float: " << converter.getToFloat() << ".0f\n"
		<< "double: " << converter.getToDouble() << ".0";
	return out;
}

/*
 * -------------------------- Getter -------------------------------
 */

char	Converter::getToChar(void) const
{
	return this->toChar;
}

int		Converter::getToInt(void) const
{
	return this->toInt;
}

float	Converter::getToFloat(void) const
{
	return this->toFloat;
}

double	Converter::getToDouble(void) const
{
	return this->toDouble;
}

/*
 * -------------------------- Setter -------------------------------
 */

void	Converter::setToChar(char toChar)
{
	this->toChar = toChar;
}

void	Converter::setToInt(int toInt)
{
	this->toInt = toInt;
}

void	Converter::setToFloat(float toFloat)
{
	this->toFloat = toFloat;
}

void	Converter::setToDouble(double toDouble)
{
	this->toDouble = toDouble;
}

/*
 * -------------------------- Function -----------------------------
 */

void	Converter::convert(const std::string& input)
{
	if (isChar(input) == true)
	{
		this->setToChar(input[0]);
		this->setToInt(static_cast<int>(this->getToChar()));
		this->setToFloat(static_cast<float>(this->getToChar()));
		this->setToDouble(static_cast<double>(this->getToChar()));
		return;
	}
	this->setToInt(std::atoi(input.c_str()));

}

bool	Converter::isChar(const std::string& input)
{
	return (input.size() == 1 && std::isprint(input[0]) && !std::isdigit(input[0]));
}

bool	Converter::isFloat(const std::string& input)
{
	return (input[input.length() - 1] == 'f');
}

bool	Converter::isPseudo(const std::string& input)
{
	return (input == "-inff" || input == "+inff" || input == "nanf" ||
			input == "-inf" || input == "inf" || input == "nan");
}
