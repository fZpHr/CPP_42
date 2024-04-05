/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:54:41 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/05 16:41:18 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::_debug(void)
{
	std::cout << "DEBUG" << std::endl;
}

void Harl::_info(void)
{
	std::cout << "INFO" << std::endl;
}

void Harl::_warning(void)
{
	std::cout << "WARNING" << std::endl;
}

void Harl::_error(void)
{
	std::cout << "ERROR" << std::endl;
}

void Harl::complain(std::string level)
{
	int i = 0;
	const std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 5)
	{
		if (level == levels[i++])
			break;
	}
	if (i == 5)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return;
	}
	switch (i)
	{
		case 1:
			_debug();
		case 2:
			_info();
		case 3:
			_warning();
		case 4:
			_error();
			break;
		default
			
	}

}
