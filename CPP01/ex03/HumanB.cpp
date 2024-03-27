/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:37:54 by hbelle            #+#    #+#             */
/*   Updated: 2024/03/26 19:05:41 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_Weapon = &weapon;
}

void	HumanB::attack(void)
{
	std::cout << _name << " attacks with his " << _Weapon->getType() << std::endl;
}

HumanB::~HumanB()
{
}
