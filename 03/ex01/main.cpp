/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:54:54 by hyeongki          #+#    #+#             */
/*   Updated: 2023/01/01 19:08:53 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap hyeongki("hyeongki");
	ClapTrap enemy("enemy");

	hyeongki.setDamage(5);
	hyeongki.attack("enemy");
	enemy.takeDamage(5);
	enemy.beRepaired(3);
	enemy.setDamage(10);
	enemy.attack("hyeongki");
	hyeongki.takeDamage(10);
	hyeongki.beRepaired(10);
	return 0;
}
