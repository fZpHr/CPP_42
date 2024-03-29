/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 20:59:33 by hbelle            #+#    #+#             */
/*   Updated: 2024/03/29 19:28:43 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *ptrcreate = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		ptrcreate[i].setName(name);
		std::cout << "Zombie " << name << " is born" << std::endl;
	}
	
	return (ptrcreate);
}
