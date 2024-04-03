/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:13:15 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/03 20:14:20 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include "iostream"

class	ClapTrap
{
	public :
		ClapTrap (std::string name);
		ClapTrap (ClapTrap const &ClapTrap);
		~ClapTrap ();

		ClapTrap &operator=(ClapTrap const &ClapTrap);
		
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	private :
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;


};

#endif