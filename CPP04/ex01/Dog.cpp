/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:26:30 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/08 17:20:46 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->_brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
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

Brain *Dog::getBrain() const
{
	return (this->_brain);
}

void Dog::setBrain(Brain *src)
{
	delete this->_brain;
	this->_brain = src;
}

