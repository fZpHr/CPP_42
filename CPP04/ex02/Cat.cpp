/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:28:55 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/10 18:21:31 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
	this->_brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(Cat const &src)
{
	this->_brain = new Brain();
	*this = src;
	std::cout << "Cat constructor copy called" << std::endl;
}

Cat &Cat::operator=(Cat const &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miaou miaou" << std::endl;
}

Brain *Cat::getBrain() const
{
	return (this->_brain);
}

void Cat::setBrain(Brain *src)
{
	delete this->_brain;
	this->_brain = src;
}