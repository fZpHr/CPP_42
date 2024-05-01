/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:42:38 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/29 20:58:25 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
}

const std::string &Weapon::getType(void) const
{
	return (_type);
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}


Weapon::~Weapon()
{
}

