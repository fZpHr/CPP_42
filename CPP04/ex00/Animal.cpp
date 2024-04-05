/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:47:32 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/05 17:57:53 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
}

Animal::Animal(std::string type) : _type(type)
{
}

Animal::~Animal()
{
}

Animal::Animal(const Animal &src)
{
	*this = src;
}

Animal &Animal::operator=(const Animal &src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

std::string Animal::getType() const
{
	return (this->_type);
}

void Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}
