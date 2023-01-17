/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 01:24:09 by hyeongki          #+#    #+#             */
/*   Updated: 2023/01/18 01:46:49 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <vector>

class Span
{
	private:
		std::vector<int>	numbers;
		std::size_t			size;

	public:
		Span(void);
		Span(unsigned int n);
		Span(const Span& origin);
		~Span(void);
		Span&			operator=(const Span& origin);
		void			addNumber(int n);
		unsigned int	shortestSpan()	const;
		unsigned int	longestSpan()	const;
		class	SpanIsFullException : public std::exception
		{
			public:
				const char* what(void) const throw();
		};
		class	NumberExistException : public std::exception
		{
			public:
				const char* what(void) const throw();
		};
};

#endif
