/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:46:00 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/04 19:28:49 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public :
		FragTrap(std::string name);
		FragTrap(FragTrap const &FragTrap);
		~FragTrap();

		FragTrap &operator=(FragTrap const &FragTrap);

		void	highFivesGuys(void);
};

#endif

