/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 20:40:55 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/01 20:13:05 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name)
{
	if (name.empty() || name.length() > 100)
		throw ("Zombie name randomChump cannot be empty or too long");
	Zombie create = Zombie(name);
	create.announce();
}
