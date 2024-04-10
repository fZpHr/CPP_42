/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:26:30 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/10 18:21:29 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
	this->_brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(Dog const &src)
{
	this->_brain = new Brain();
	*this = src;
	std::cout << "Dog constructor copy called" << std::endl;
}

Dog &Dog::operator=(Dog const &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Wouaf wouaf" << std::endl;
}

Brain *Dog::getBrain() const
{
	return (this->_brain);
}

void Dog::setBrain(Brain *src)
{
	delete this->_brain;
	this->_brain = src;
}

