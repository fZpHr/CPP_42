/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:33:18 by hbelle            #+#    #+#             */
/*   Updated: 2024/03/27 17:14:52 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::addContact(int index)
{
	contacts[index].add();
}

void PhoneBook::searchContact(int index)
{
	contacts[index].search();
}

void PhoneBook::index(int index)
{
	contacts[index].index();
}