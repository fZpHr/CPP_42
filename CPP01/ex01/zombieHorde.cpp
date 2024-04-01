/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 20:59:33 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/01 19:18:51 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
	{
		std::cerr << "You can't create a horde with less than 1 zombie" << std::endl;
		return (NULL);
	}
	else if (name.empty())
	{
		std::cerr << "You can't create a zombie without a name" << std::endl;
		return (NULL);
	}
	else if (name.length() > 100)
	{
		std::cerr << "The name of the zombie is too long" << std::endl;
		return (NULL);
	}
	else if (N > 100)
	{
		std::cerr << "You can't create a horde with more than 100 zombies" << std::endl;
		return (NULL);
	}
	std::cout << "Create(alloc) a zombie horde of 5 zombies" << std::endl;
	Zombie *ptrcreate = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		ptrcreate[i].setName(name);
		std::cout << "Zombie " << name << " is born" << std::endl;
	}
	return (ptrcreate);
}
