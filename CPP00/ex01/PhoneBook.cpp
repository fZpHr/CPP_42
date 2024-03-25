/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:33:18 by hbelle            #+#    #+#             */
/*   Updated: 2024/03/25 16:23:35 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Contact::add()
{
    std::cout << "First name: ";
    while (std::getline(std::cin, _first_name), _first_name.empty())
	{
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(0) ;
		}
		std::cout << "First name: ";
	}
	std::cout << "Last name: ";
	while (std::getline(std::cin, _last_name), _last_name.empty())
	{
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(0) ;
		}
		std::cout << "Last name: ";
	}
	std::cout << "Nickname: ";
	while (std::getline(std::cin, _nickname), _nickname.empty())
	{
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(0) ;
		}
		std::cout << "Nickname: ";
	}
	std::cout << "Phone number: ";
	while (std::getline(std::cin, _phone_number), _phone_number.empty())
	{
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(0) ;
		}
		std::cout << "Phone number: ";
	}
	std::cout << "Darkest secret: ";
	while (std::getline(std::cin, _darkest_secret), _darkest_secret.empty())
	{
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(0) ;
		}
		std::cout << "Darkest secret: ";
	}
}

void    Contact::search()
{

	if (_first_name.length() > 10)
	{
		for (long unsigned int i = 0; i < 9; i++)
			std::cout << _first_name[i];
		std::cout << ".|";
	}
	else
	{
		for (long unsigned int i = 0; i < 10 - _first_name.length(); i++)
			std::cout << " ";
		std::cout << _first_name;
		std::cout << "|";
	}
	if (_last_name.length() > 10)
	{
		for (long unsigned int i = 0; i < 9; i++)
			std::cout << _last_name[i];
		std::cout << ".|";
	}
	else
	{
		for (long unsigned int i = 0; i < 10 - _last_name.length(); i++)
			std::cout << " ";
		std::cout << _last_name;
		std::cout << "|";
	}
	if (_nickname.length() > 10)
	{
		for (long unsigned int i = 0; i < 9; i++)
			std::cout << _nickname[i];
		std::cout << ".";
	}
	else
	{
		for (long unsigned int i = 0; i < 10 - _nickname.length(); i++)
			std::cout << " ";
		std::cout << _nickname;
	}
	std::cout << std::endl;
}

void	Contact::index()
{
	std::cout << "First name: " << _first_name << std::endl;
	std::cout << "Last name: " << _last_name << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phone number: " << _phone_number << std::endl;
	std::cout << "Darkest secret: " << _darkest_secret << std::endl;
}

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
			Phonebook.contacts[i].add();
			i++;
		}
		else if (command == "SEARCH")
		{
			std::cout << "     index|first name| last name|  nickname" << std::endl;
			std::cout << "-------------------------------------------" << std::endl;
			for (int j = 0; j <= 7; j++)
			{
				std::cout << "         " << j+1 << "|";
				Phonebook.contacts[j].search();
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
				Phonebook.contacts[index - 1].index();
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
