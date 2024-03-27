/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:30:49 by hbelle            #+#    #+#             */
/*   Updated: 2024/03/26 16:48:46 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	public :
		Weapon(std::string type);
		~Weapon(void);
		std::string const &getType(void);
		void setType(std::string type);
	private :
		std::string _type;
};

#endif