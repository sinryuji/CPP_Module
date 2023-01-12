/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:41:23 by hyeongki          #+#    #+#             */
/*   Updated: 2023/01/12 18:03:46 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

/*
 * -------------------------- Constructor -----------------------------
 */

Converter::Converter(void)
{
	this->setInputValue(NULL);
	this->setCharValue(0);
	this->setInputValue(0);
	this->setFloatValue(0);
	this->setDoubleValue(0);
}

Converter::Converter(char* inputValue)
{
	convert(inputValue);
}

Converter::Converter(const Converter& origin)
{
	this->setInputValue(origin.getInputValue());
	this->setCharValue(origin.getCharValue());
	this->setInputValue(origin.getInputValue());
	this->setFloatValue(origin.getFloatValue());
	this->setDoubleValue(origin.getDoubleValue());
}

/*
 * -------------------------- Destructor -----------------------------
 */

Converter::~Converter(void)
{
}

/*
 * -------------------------- Operator -----------------------------
 */
		
Converter&	Converter::operator=(const Converter& origin)
{
	if (this != &origin)
	{
		this->setInputValue(origin.getInputValue());
		this->setCharValue(origin.getCharValue());
		this->setInputValue(origin.getInputValue());
		this->setFloatValue(origin.getFloatValue());
		this->setDoubleValue(origin.getDoubleValue());
	}
	return *this;
}		

/*
 * -------------------------- Getter -------------------------------
 */

char*	Converter::getInputValue(void) const
{
	return this->inputValue;
}
char		Converter::getCharValue(void) const
{
	return this->charValue;
}
int			Converter::getIntValue(void) const
{
	return this->intValue;
}
float		Converter::getFloatValue(void) const
{
	return this->floatValue;
}
double		Converter::getDoubleValue(void) const
{
	return this->doubleValue;
}

/*
 * -------------------------- Setter -------------------------------
 */

void	Converter::setInputValue(char* inputValue)
{
	this->inputValue = inputValue;
}
void	Converter::setCharValue(char charValue)
{
	this->charValue = charValue;
}
void	Converter::setIntValue(int intValue)
{
	this->intValue = intValue;
}
void	Converter::setFloatValue(float floatValue)
{
	this->floatValue = floatValue;
}
void	Converter::setDoubleValue(double doubleValue)
{
	this->doubleValue = doubleValue;
}

/*
 * -------------------------- Function -----------------------------
 */

void	Converter::convert(char* inputValue)
{

}

void	Converter::convertChar(char* inputValue)
{
}

void	Converter::convertInt(char* inputValue)
{

}

void	Converter::convertFloat(char* inputValue)
{
	
}

void	Converter::convertDouble(char* inputValue)
{

}
