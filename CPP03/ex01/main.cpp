/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:12:32 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/03 20:15:20 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap claptrap("ClapTrap");

	std::cout << std::endl;
	std::cout << "Attack empty target:" << std::endl;
	claptrap.attack("");
	std::cout << "Attack with target:" << std::endl;
	for (int i = 0; i < 5; i++)
		claptrap.attack("test");
	std::cout << std::endl;

	std::cout << "Take damage with invalid amount:" << std::endl;
	claptrap.takeDamage(-1001);
	std::cout << "Take damage with 0 amount:" << std::endl;
	claptrap.takeDamage(0);
	std::cout << "Take damage with valid amoud:" << std::endl;
	for (int i = 0; i < 5; i++)
		claptrap.takeDamage(5);
	std::cout << std::endl;

	std::cout << "Repair with invalid amount:" << std::endl;
	claptrap.beRepaired(-10);
	std::cout << "Repair with 0 amount:" << std::endl;
	claptrap.beRepaired(0);
	std::cout << "Repair with valid amount:" << std::endl;
	for (int i = 0; i < 6; i++)
		claptrap.beRepaired(1);
	std::cout << std::endl;
	return (0);
}