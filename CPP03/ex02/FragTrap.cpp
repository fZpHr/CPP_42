/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:45:49 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/04 19:29:33 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor" << std::endl;
}

FragTrap::FragTrap(FragTrap const &FragTrap) : ClapTrap(FragTrap)
{
	*this = FragTrap;
}

FragTrap &FragTrap::operator=(FragTrap const &FragTrap)
{
	this->_name = FragTrap._name;
	this->_hitPoints = FragTrap._hitPoints;
	this->_energyPoints = FragTrap._energyPoints;
	this->_attackDamage = FragTrap._attackDamage;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " want do to a high fives !" << std::endl;
}
