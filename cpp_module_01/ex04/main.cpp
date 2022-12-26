/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:07:10 by hyeongki          #+#    #+#             */
/*   Updated: 2022/12/26 15:34:58 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
		Sed::PrintError("Invalid argument count");
	
	Sed sed(argv[1], argv[2], argv[3]);

	return 0;
}
