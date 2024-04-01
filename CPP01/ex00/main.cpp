/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 20:02:45 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/01 20:11:37 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie1 = NULL;
    try 
	{
        Zombie zombie("1");
        zombie.announce();
		zombie1 = newZombie("2");
		zombie1->announce();
		randomChump("3");
		delete zombie1;
		return (0);
	}
	catch (const char* msg)
	{
		std::cerr << msg << std::endl;
		if (zombie1 != NULL)
			delete zombie1;
		return (1);
	}
}
