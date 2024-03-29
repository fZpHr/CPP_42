/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 20:02:45 by hbelle            #+#    #+#             */
/*   Updated: 2024/03/29 19:16:16 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::cout << "Create(alloc) a zombie horde of 5 zombies" << std::endl;
	Zombie *zombie = zombieHorde(5, "Horde");
	std::cout << std::endl;
	std::cout << "Announce each zombie" << std::endl;
	for (int i = 0; i < 5; i++)
		zombie[i].announce();
	std::cout << std::endl;
	std::cout << "Delete(free) the horde" << std::endl;
	delete[] zombie;
	return (0);
}
