/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:58:06 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/15 18:27:59 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int sGrade, int eGrade) : _name(name) , _signGrade(sGrade), _execGrade(eGrade)
{
	if (eGrade < 1 || sGrade < 1)
		throw Form::GradeTooHighException();
	if (eGrade > 150 || sGrade > 150)
		throw Form::GradeTooLowException();
	if (name.empty())
		throw Form::EmptyNameException();
	this->_signed = false;
	std::cout << "Constructor Form called" << std::endl;
}

Form::Form(Form const &src) : _name(src._name), _signGrade(src._signGrade), _execGrade(src._execGrade)
{
	std::cout << "Constructor copy Form called" << std::endl;
	*this = src;
}

Form::~Form()
{
	std::cout << "Deconstructor Form called" << std::endl;
}

Form &Form::operator=(Form const &src)
{
	if (this != &src)
		this->_signed = src._signed;
	return (*this);
}

std::string Form::getName() const
{
	return (this->_name);
}

int	Form::getGradeSign() const
{
	return (this->_signGrade);
}

int	Form::getGradeExec() const
{
	return (this->_execGrade);
}

std::ostream &operator<<(std::ostream &out, Form const &Form)
{
	out << "Form " << Form.getName() << " is " << (Form.getSigned() ? "" : "not ") << "signed" << std::endl;
	return (out);
}

bool Form::getSigned() const
{
	return (this->_signed);
}

void Form::beSigned(Bureaucrat &src)
{
	if (src.getGrade() > this->_signGrade)
		throw Form::GradeTooLowException();
	if (this->_signed)
		throw Form::FormAlreadySignedException();
	this->_signed = true;
}
