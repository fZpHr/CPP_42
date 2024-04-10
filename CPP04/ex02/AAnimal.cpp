/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:47:32 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/09 20:21:54 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("Animal")
{
	std::cout << "Animal constructor called: " << this->type << std::endl;
}

AAnimal::AAnimal(std::string src) : type(src)
{
	std::cout << "Animal constructor called: " << this->type << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal destructor called: " << this->type << std::endl;
}

AAnimal::AAnimal(AAnimal const &src)
{
	std::cout << "Animal constructor called: " << this->type << std::endl;
	*this = src;
}

AAnimal &AAnimal::operator=(AAnimal const &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

std::string AAnimal::getType() const
{
	return (this->type);
}

void AAnimal::makeSound() const
{
	std::cout << "I am an animal" << std::endl;
}