/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:12:32 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/04 19:31:35 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap claptrap("BobClapTrap");

	std::cout << std::endl;
	std::cout << "Attack empty target:" << std::endl << "	";
	claptrap.attack("");
	std::cout << "Attack with target:" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "	";
		claptrap.attack("test");
	}
	std::cout << std::endl;

	std::cout << "Take damage with invalid amount:" << std::endl << "	";
	claptrap.takeDamage(-1001);
	std::cout << "Take damage with 0 amount:" << std::endl << "	";
	claptrap.takeDamage(0);
	std::cout << "Take damage with valid amount:" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "	";
		claptrap.takeDamage(5);
	}
	std::cout << std::endl;

	std::cout << "Repair with invalid amount:" << std::endl << "	";
	claptrap.beRepaired(-10);
	std::cout << "Repair with 0 amount:" << std::endl << "	";
	claptrap.beRepaired(0);
	std::cout << "Repair with valid amount:" << std::endl;
	for (int i = 0; i < 6; i++)
	{
		std::cout << "	";
		claptrap.beRepaired(1);
	}
	std::cout << std::endl;
	std::cout << std::endl;

//##############################################################################################

	std::cout << "#####NEW CHALLENGER#####:" << std::endl;
	std::cout << "     ScavTrap appears.." << std::endl;
	std::cout << "#####NEW CHALLENGER#####:" << std::endl;
	std::cout << std::endl;

	ScavTrap scavtrap("BobScavTrap");
	std::cout << std::endl;
	std::cout << "Attack empty target:" << std::endl << "	";
	scavtrap.attack("");
	std::cout << "Attack with target:" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "	";
		scavtrap.attack("test");
	}
	std::cout << std::endl;

	std::cout << "Take damage with invalid amount:" << std::endl << "	";
	scavtrap.takeDamage(-1001);
	std::cout << "Take damage with 0 amount:" << std::endl << "	";
	scavtrap.takeDamage(0);
	std::cout << "Take damage with valid amount:" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "	";
		scavtrap.takeDamage(5);
	}
	std::cout << std::endl;

	std::cout << "Repair with invalid amount:" << std::endl << "	";
	scavtrap.beRepaired(-10);
	std::cout << "Repair with 0 amount:" << std::endl << "	";
	scavtrap.beRepaired(0);
	std::cout << "Repair with valid amount:" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "	";
		scavtrap.beRepaired(1);
	}
	std::cout << std::endl;
	std::cout << "Guard Gate:" << std::endl << "	";
	scavtrap.guardGate();
	std::cout << std::endl;
	std::cout << std::endl;

//##############################################################################################
	
	std::cout << "#####NEW CHALLENGER#####:" << std::endl;
	std::cout << "     FragTrap appears.." << std::endl;
	std::cout << "#####NEW CHALLENGER#####:" << std::endl;
	std::cout << std::endl;

	FragTrap fragtrap("BobFragTrap");
	std::cout << std::endl;
	std::cout << "Attack empty target:" << std::endl << "	";
	fragtrap.attack("");
	std::cout << "Attack with target:" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "	";
		fragtrap.attack("test");
	}
	std::cout << std::endl;

	std::cout << "Take damage with invalid amount:" << std::endl << "	";
	fragtrap.takeDamage(-1001);
	std::cout << "Take damage with 0 amount:" << std::endl << "	";
	fragtrap.takeDamage(0);
	std::cout << "Take damage with valid amount:" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "	";
		fragtrap.takeDamage(5);
	}
	std::cout << std::endl;

	std::cout << "Repair with invalid amount:" << std::endl << "	";
	fragtrap.beRepaired(-10);
	std::cout << "Repair with 0 amount:" << std::endl << "	";
	fragtrap.beRepaired(0);
	std::cout << "Repair with valid amount:" << std::endl;
	for (int i = 0; i < 6; i++)
	{
		std::cout << "	";
		fragtrap.beRepaired(1);
	}
	std::cout << std::endl;
	std::cout << "High Five:" << std::endl << "	";
	fragtrap.highFivesGuys();
	std::cout << std::endl;
	return (0);
}