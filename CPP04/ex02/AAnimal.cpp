/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:47:32 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/08 19:12:48 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("Animal")
{
	std::cout << "Animal constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "Animal constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src)
{
	*this = src;
}

AAnimal &AAnimal::operator=(const AAnimal &src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

std::string AAnimal::getType() const
{
	return (this->_type);
}

void AAnimal::makeSound() const
{
	std::cout << "I am an animal" << std::endl;
}