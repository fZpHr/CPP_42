/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:37:54 by hbelle            #+#    #+#             */
/*   Updated: 2024/03/28 18:30:47 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	this->_Weapon = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_Weapon = &weapon;
}

void	HumanB::attack(void)
{
	if (!this->_Weapon)
	{
		std::cout << _name << " attacks with his bare hands" << std::endl;
		return ;
	}
	std::cout << _name << " attacks with his " << this->_Weapon->getType() << std::endl;
}

