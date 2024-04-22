/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:23:47 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/16 15:26:28 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Constructor Intern called" << std::endl;
}

Intern::Intern(Intern const &src)
{
	std::cout << "Constructor copy Intern called" << std::endl;
	*this = src;
}

Intern::~Intern()
{
	std::cout << "Deconstructor Intern called" << std::endl;
}

Intern &Intern::operator=(Intern const &src)
{
	if (this != &src)
	{
	}
	return (*this);
}

AForm	*Intern::makeForm(std::string nameForm, std::string targetForm) const
{
	if (nameForm.empty() || targetForm.empty())
		throw AForm::EmptyNameException();
	const std::string nameFormList[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	int i = 0;
	while (i < 3)
	{
		if (nameForm == nameFormList[i])
			break;
		i++;
	}
	switch (i)
	{
		case 0:
			std::cout << "Intern creates " << nameForm << std::endl;
			return (new RobotomyRequestForm(targetForm));
		case 1:
			std::cout << "Intern creates " << nameForm << std::endl;
			return (new PresidentialPardonForm(targetForm));
		case 2:
			std::cout << "Intern creates " << nameForm << std::endl;
			return (new ShrubberyCreationForm(targetForm));
		default:
			throw AForm::FormNotFoundException();
	}
}