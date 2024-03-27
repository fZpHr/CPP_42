/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:01:01 by hbelle            #+#    #+#             */
/*   Updated: 2024/03/26 16:05:06 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		void    announce(void);
		~Zombie(void);
	private:
		std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif