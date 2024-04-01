/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 20:02:45 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/01 19:18:16 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie = zombieHorde(5, "slt");
	if (zombie == NULL)
		return (1);
	std::cout << std::endl;
	std::cout << "Announce each zombie" << std::endl;
	for (int i = 0; i < 5; i++)
		zombie[i].announce();
	std::cout << std::endl;
	std::cout << "Delete(free) the horde" << std::endl;
	delete[] zombie;
	return (0);
}
