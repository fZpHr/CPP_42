/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:01:08 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/04 15:42:29 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_HPP
# define HumanB_HPP

#include "Weapon.hpp"

class HumanB
{
	public :
		HumanB(std::string name);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon &weapon);
	private :
		std::string	_name;
		Weapon	*_weapon;
};

#endif