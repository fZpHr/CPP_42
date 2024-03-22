/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:33:18 by hbelle            #+#    #+#             */
/*   Updated: 2024/03/22 18:58:18 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
}

Phonebook::~Phonebook()
{
}

void    Phonebook::add()
{
	std::cout << "First name: ";
	std::cin >> _first_name;
	std::cout << "Last name: ";
	std::cin >> _last_name;
	std::cout << "Nickname: ";
	std::cin >> _nickname;
	std::cout << "Phone number: ";
	std::cin >> _phone_number;
	std::cout << "Darkest secret: ";
	std::cin >> _darkest_secret;
	std::cin.ignore();
}

void    Phonebook::search()
{
	std::cout << "First name: " << _first_name << std::endl;
	std::cout << "Last name: " << _last_name << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phone number: " << _phone_number << std::endl;
	std::cout << "Darkest secret: " << _darkest_secret << std::endl;
}

int	main(void)
{
	Phonebook	Phonebook;
	std::string	command;

	while (1)
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, command);
		if (command == "ADD")
			Phonebook.add();
		else if (command == "SEARCH")
			Phonebook.search();
		else if (command == "EXIT")
			break ;
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}
