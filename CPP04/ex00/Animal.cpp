/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:47:32 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/10 15:11:04 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal constructor called: " << this->type << std::endl;
}

Animal::Animal(std::string src) : type(src)
{
	std::cout << "Animal constructor called: " << this->type << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called: " << this->type << std::endl;
}

Animal::Animal(Animal const &src)
{
	std::cout << "Animal constructor copy called: " << this->type << std::endl;
	*this = src;
}

Animal &Animal::operator=(Animal const &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "I am an animal" << std::endl;
}