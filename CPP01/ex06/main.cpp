/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 18:22:23 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/01 19:33:36 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Usage: ./harlFilter [level]" << std::endl;
		return (1);
	}
	else
	{
		Harl harl;
		harl.complain(av[1]);
	}
	return (0);
}