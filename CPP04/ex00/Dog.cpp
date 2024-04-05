/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:26:30 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/05 17:46:13 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
}

Dog::~Dog()
{
}

Dog::Dog(const Dog &src)
{
	*this = src;
}

Dog &Dog::operator=(const Dog &src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Wouaf wouaf" << std::endl;
}