/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:03:37 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/01 20:09:17 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	if (_name.empty() || name.length() > 100)
		throw ("Zombie name cannot be empty or too long");
	std::cout << "Zombie " << _name << " is born" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << _name << " is dead" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}
