/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 16:50:51 by hyeongki          #+#    #+#             */
/*   Updated: 2022/12/26 11:46:42 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook
{
	private:
		Contact				contacts[8];
		int					index;
		void				PrintContacts(void);
		static bool			ValidateIndex(std::string index);
		static std::string	ToString(int n);

	public:
		PhoneBook(void);
		void		AddContact(void);
		void		SearchContact(void);
};

#endif
