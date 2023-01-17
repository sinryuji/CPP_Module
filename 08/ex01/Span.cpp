/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 01:29:29 by hyeongki          #+#    #+#             */
/*   Updated: 2023/01/18 02:08:20 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
 * -------------------------- Constructor --------------------------
 */

Span::Span(void) : size(0) {}

Span::Span(unsigned int n) : size(n) {}

Span::Span(const Span& origin) : numbers(origin.numbers), size(origin.size) {}

/*
 * -------------------------- Destructor ---------------------------
 */

Span::~Span(void) {}

/*
 * -------------------------- Operator -----------------------------
 */

Span& Span::operator=(const Span& origin)
{
	if (this != &origin)
	{
		this->numbers = origin.numbers;
		this->size = origin.size;
	}
	return *this;
}

/*
 * -------------------------- Overring -----------------------------
 */

const char* Span::SpanIsFullException::what(void) const throw()
{
	return "Span is full";
}

const char* Span::NumberExistException::what(void) const throw()
{
	return "This number is already exist";
}

/*
 * -------------------------- Function -----------------------------
 */

void	Span::addNumber(int n)
{
	if (this->numbers.size() >= this->size)
		throw SpanIsFullException();
	if (find(this->numbers.begin(), this->numbers.end(), n) != this->numbers.end())
		throw NumberExistException();
}
