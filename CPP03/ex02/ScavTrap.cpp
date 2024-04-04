/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 16:54:23 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/04 19:29:58 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &ScavTrap) : ClapTrap(ScavTrap)
{
	*this = ScavTrap;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScapTrap destructor" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &ScavTrap)
{
	this->_name = ScavTrap._name;
	this->_hitPoints = ScavTrap._hitPoints;
	this->_energyPoints = ScavTrap._energyPoints;
	this->_attackDamage = ScavTrap._attackDamage;
	return *this;
}

void	ScavTrap::attack(const std::string &target)
{
	if (target.empty())
	{
		std::cout << "ScavTrap " << this->_name << " can't attack without target, say the narrator " << std::endl;
		return ;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "ScavTrap " << this->_name << " has no energy points, say the narrator " << std::endl;
		return ;
	}
	if (this->_hitPoints == 0)
	{
		std::cout << "ScavTrap " << this->_name << " is dead, say the narrator" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage! Say the narrator" << std::endl;
	this->_energyPoints -= 1;
	if (this->_energyPoints > 100)
		this->_energyPoints = 0;
}
void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}