/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:02:44 by hyeongki          #+#    #+#             */
/*   Updated: 2022/12/22 19:50:06 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string name;
	
	public:
		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );
		void	setName( std::string name );
		void	announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif
