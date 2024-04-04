/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 19:34:41 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/04 17:13:27 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &ScavTrap);
		~ScavTrap();

		ScavTrap &operator=(ScavTrap const &ScavTrap);

		void	attack(const std::string &target);
		void	guardGate();
};

#endif