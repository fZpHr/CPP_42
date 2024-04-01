/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 20:19:01 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/01 20:13:08 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	if (name.empty() || name.length() > 100)
		throw ("Zombie name newZombie cannot be empty or too long");
	Zombie* copyptr = new Zombie(name);
	return (copyptr);
}
