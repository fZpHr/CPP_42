/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:47:32 by hbelle            #+#    #+#             */
/*   Updated: 2024/03/27 17:42:00 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

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
		std::cout << std::setw(10) << std::right << _first_name;
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
		std::cout << std::setw(10) << std::right << _last_name;
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
		std::cout << std::setw(10) << std::right << _nickname;
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