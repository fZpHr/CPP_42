/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:28:55 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/05 17:46:20 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
}

Cat::~Cat()
{
}

Cat::Cat(const Cat &src)
{
	*this = src;
}

Cat &Cat::operator=(const Cat &src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miaou miaou" << std::endl;
}