/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:47:49 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/04 19:19:37 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(100), _energyPoints(100), _attackDamage(30)
{
	std::cout << "ClapTrap constructor" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &ClapTrap)
{
	*this = ClapTrap;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &ClapTrap)
{
	this->_name = ClapTrap._name;
	this->_hitPoints = ClapTrap._hitPoints;
	this->_energyPoints = ClapTrap._energyPoints;
	this->_attackDamage = ClapTrap._attackDamage;
	return *this;
}
	
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (target.empty())
	{
		std::cout << "ClapTrap " << this->_name << " can't attack without target" << std::endl;
		return ;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy points" << std::endl;
		return ;
	}
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints -= 1;
	if (this->_energyPoints > 100)
		this->_energyPoints = 0;

}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount == 0 || (amount >= 100 && amount <= 1000) || amount > 1000)
	{
		if (amount == 0)
		{
			std::cout << "ClapTrap " << this->_name << " take no damage" << std::endl;
			return ;
		}
		else if (amount >= 100 && amount <= 1000)
			std::cout << "ClapTrap " << this->_name << " is hit with lethal damage" << std::endl;
		else
		{
			std::cout << "ClapTrap " << this->_name << " can't take damage with this amount" << std::endl;
			return ;
		}
	}
	if (this->_hitPoints == 0 || this->_hitPoints > 100)
	{
		std::cout << "ClapTrap " << this->_name << " already dead, show some mercy..." << std::endl;
		return ;
	}
	this->_hitPoints -= amount;
	if (this->_hitPoints > 100)
		this->_hitPoints = 0;
	std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
	if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	int tmp = this->_hitPoints;
	if (amount > 1000)
	{
		std::cout << "ClapTrap " << this->_name << " can't be repaired with this amount" << std::endl;
		return ;
	}
	if (amount == 0)
	{
		std::cout << "ClapTrap " << this->_name << " attempted to be repaired, but it failed" << std::endl;
		return ;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy points" << std::endl;
		return ;
	}
	if (this->_hitPoints == 100)
	{
		std::cout << "ClapTrap " << this->_name << " already full life" << std::endl;
		return ;
	}
	this->_hitPoints += amount;
	if (this->_hitPoints > 100)
		this->_hitPoints = 100;
	this->_energyPoints -= 1;
	if (this->_energyPoints > 100)
		this->_energyPoints = 0;
	std::cout << "ClapTrap " << this->_name << " be repaired " << amount << " points of Hitpoints !" << std::endl;
	if (tmp == 0)
		std::cout << "ClapTrap " << this->_name << " comes back on the field !" << std::endl;


}


