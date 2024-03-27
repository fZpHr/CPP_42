/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:37:44 by hbelle            #+#    #+#             */
/*   Updated: 2024/03/27 14:19:55 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA()
{
}

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _Weapon(weapon)
{
}

void HumanA::attack(void)
{
	std::cout << _name << " attacks with his " << _Weapon.getType() << std::endl;
}
