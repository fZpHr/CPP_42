/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:06:02 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/10 18:15:37 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(Brain const &src)
{
	std::cout << "Brain constructor copy called" << std::endl;
	*this = src;
}

Brain &Brain::operator=(Brain const &src)
{
	if (this != &src)
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = src._ideas[i];
	return (*this);
}

void Brain::setIdea(std::string idea, int index)
{
	if (index < 0 || index >= 100)
		return ;
	if (idea.empty())
		this->_ideas[index] = "Empty idea";
	else
		this->_ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
	if (index < 0 || index >= 100)
		return ("Invalid index");
	return (this->_ideas[index]);
}
