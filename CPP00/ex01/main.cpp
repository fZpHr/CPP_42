/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:48:27 by hbelle            #+#    #+#             */
/*   Updated: 2024/03/27 17:14:52 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	Phonebook;
	std::string	command;
	int			i = 0;

	while (1)
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, command);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			break ;
		}
		if (command == "ADD")
		{
			Phonebook.addContact(i);
			i++;
		}
		else if (command == "SEARCH")
		{
			std::cout << "     index|first name| last name|  nickname" << std::endl;
			std::cout << "-------------------------------------------" << std::endl;
			for (int j = 0; j <= 7; j++)
			{
				std::cout << "         " << j+1 << "|";
				Phonebook.searchContact(j);
			}
			std::cout << "-------------------------------------------" << std::endl;
			std::cout << "Enter an index: ";
			std::getline(std::cin, command);
			if (std::cin.eof())
			{
				std::cout << std::endl;
				break ;
			}
			std::cout << "-------------------------------------------" << std::endl;
			if (command == "1" || command == "2" || command == "3" || command == "4" || command == "5" || command == "6" || command == "7" || command == "8")
			{
				int index = std::atoi(command.c_str());
				Phonebook.index(index - 1);
			}
			else
				std::cout << "Invalid index" << std::endl;
			std::cout << "-------------------------------------------" << std::endl;

		}
		else if (command == "EXIT")
			break ;
		else
			std::cout << "Invalid command" << std::endl;
		if (i == 8)
			i = 0;
	}
	return (0);
}