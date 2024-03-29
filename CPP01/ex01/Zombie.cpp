/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:03:37 by hbelle            #+#    #+#             */
/*   Updated: 2024/03/29 19:27:41 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "Zombie " << this->_name << " is born" << std::endl;
}

Zombie::Zombie()
{
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << " is dead" << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}
void	Zombie::announce(void)
{
	std::cout << _name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}
