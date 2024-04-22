/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:58:06 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/16 15:19:27 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string name, int sGrade, int eGrade) : _name(name) , _signGrade(sGrade), _execGrade(eGrade)
{
	if (eGrade < 1 || sGrade < 1)
		throw AForm::GradeTooHighException();
	if (eGrade > 150 || sGrade > 150)
		throw AForm::GradeTooLowException();
	if (name.empty())
		throw AForm::EmptyNameException();
	this->_signed = false;
	std::cout << "Constructor AForm called" << std::endl;
}

AForm::AForm(AForm const &src) : _name(src._name), _signGrade(src._signGrade), _execGrade(src._execGrade)
{
	std::cout << "Constructor copy AForm called" << std::endl;
	*this = src;
}

AForm::~AForm()
{
	std::cout << "Deconstructor AForm called" << std::endl;
}

AForm &AForm::operator=(AForm const &src)
{
	if (this != &src)
		this->_signed = src._signed;
	return (*this);
}

std::string AForm::getName() const
{
	return (this->_name);
}

int	AForm::getGradeSign() const
{
	return (this->_signGrade);
}

int	AForm::getGradeExec() const
{
	return (this->_execGrade);
}

std::ostream &operator<<(std::ostream &out, AForm const &AForm)
{
	out << "Form " << AForm.getName() << " is " << (AForm.getSigned() ? "" : "not ") << "signed" << std::endl;
	return (out);
}

bool AForm::getSigned() const
{
	return (this->_signed);
}

void AForm::beSigned(Bureaucrat &src)
{
	if (src.getGrade() > this->_signGrade)
		throw AForm::GradeTooLowException();
	if (this->_signed)
		throw AForm::FormAlreadySignedException();
	this->_signed = true;
}
