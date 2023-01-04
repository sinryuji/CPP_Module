/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:54:54 by hyeongki          #+#    #+#             */
/*   Updated: 2023/01/04 16:21:57 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap hyeongki("hyeongki");
	ScavTrap enemy("enemy");

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
