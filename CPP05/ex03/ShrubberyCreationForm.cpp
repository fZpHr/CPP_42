/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 19:37:50 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/15 20:02:34 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "Constructor ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src), _target(src._target)
{
	std::cout << "Constructor copy ShrubberyCreationForm called" << std::endl;
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Deconstructor ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	if (this != &src)
		AForm::operator=(src);
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeExec())
		throw AForm::GradeTooLowException();
	std::ofstream ofs((this->_target + "_shrubbery").c_str());
    if (ofs.is_open())
    {
        ofs << std::endl;
        ofs << "              v .   ._, |_  .," << std::endl;
        ofs << "   `-._\\/  .  \\ /    |/_"     << std::endl;
        ofs << "       \\\\  _, y | \\\\/"      << std::endl;
        ofs << " _\\_.___\\\\, \\\\/ -.\\||"    << std::endl;
        ofs << "   `7-,--.`._||  / / ,"         << std::endl;
        ofs << "   /'     `-. `./ / |/_.'"      << std::endl;
        ofs << "             |    |\\//"        << std::endl;
        ofs << "             |_    /"           << std::endl;
        ofs << "             |-   |"            << std::endl;
        ofs << "             |   =|"            << std::endl;
        ofs << "             |    |"            << std::endl;
        ofs << "------------/ ,  . \\--------._" << std::endl;
        ofs << std::endl;
        ofs.close();
    }
	else
		throw AForm::FileNotOpenedException();
}

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}