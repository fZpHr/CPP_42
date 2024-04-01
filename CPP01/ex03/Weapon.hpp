/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:30:49 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/01 18:41:05 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	public :
		Weapon(std::string type);
		~Weapon(void);
		const std::string &getType(void) const;
		void setType(std::string type);
	private :
		std::string _type;
};

#endif