/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:11:51 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/16 15:28:00 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

int main()
{
    try
    {
        AForm* rrf = NULL;
        Intern someRandomIntern;
        Bureaucrat bureaucrat = Bureaucrat("Bob", 5);
        PresidentialPardonForm form = PresidentialPardonForm("Trump");
        RobotomyRequestForm form2 = RobotomyRequestForm("Bender");
        ShrubberyCreationForm form3 = ShrubberyCreationForm("Tree");
        try
        {
            std::cout << std::endl;
            std::cout << bureaucrat << std::endl;
            std::cout << "setGrade at 100" << std::endl;
            bureaucrat.setGrade(100);
            std::cout << bureaucrat << std::endl;
            /* std::cout << "setGrade at 0 " << std::endl;
            bureaucrat.setGrade(0);
            std::cout << bureaucrat << std::endl; */ 
            std::cout << "setGrade 3: " << std::endl;
            bureaucrat.setGrade(5);
            std::cout << bureaucrat << std::endl;
            std::cout << "upGrade: ";
            bureaucrat.upGrade();
            std::cout << bureaucrat << std::endl;
            std::cout << "upGrade: ";
            bureaucrat.upGrade();
            std::cout << bureaucrat << std::endl;
/*             std::cout << "upGrade: ";
            bureaucrat.upGrade();
            std::cout << bureaucrat << std::endl; */
/* 		    std::cout << "setGrade at 150" << std::endl;
            bureaucrat.setGrade(150);
            std::cout << bureaucrat << std::endl; */
            std::cout << "downGrade: ";
            bureaucrat.downGrade();
		    std::cout << bureaucrat << std::endl << std::endl;
            std::cout << "----------------------------------------------------------------------------" << std::endl << std::endl;
            std::cout << form << std::endl;
            std::cout << "signForm: ";
            bureaucrat.signForm(form);
            std::cout << form << std::endl;
            std::cout << "executeForm: ";
            bureaucrat.executeForm(form);
            std::cout << "----------------------------------------------------------------------------" << std::endl << std::endl;
            std::cout << form2 << std::endl;
            std::cout << "signForm: ";
            bureaucrat.signForm(form2);
            std::cout << form2 << std::endl;
            std::cout << "executeForm: ";
            bureaucrat.executeForm(form2);
            std::cout << "----------------------------------------------------------------------------" << std::endl << std::endl;
            std::cout << "signForm: ";
            bureaucrat.signForm(form3);
            std::cout << form3 << std::endl;
            std::cout << "executeForm: ";
            bureaucrat.executeForm(form3);
            std::cout << std::endl;
            std::cout << "----------------------------------------------------------------------------" << std::endl << std::endl;
            std::cout << "----------------------------------------------------------------------------" << std::endl << std::endl;
            {
                rrf = someRandomIntern.makeForm("robotomy request", "Bender");
                std::cout << *rrf << std::endl;
                std::cout << "signForm: ";
                bureaucrat.signForm(*rrf);
                std::cout << *rrf << std::endl;
                std::cout << "executeForm: ";
                bureaucrat.executeForm(*rrf);
                std::cout << std::endl;
                delete rrf;
                rrf = NULL;
                std::cout << std::endl;
                std::cout << "----------------------------------------------------------------------------" << std::endl << std::endl;
                rrf = someRandomIntern.makeForm("presidential pardon", "Trump");
                std::cout << *rrf << std::endl;
                std::cout << "signForm: ";
                bureaucrat.signForm(*rrf);
                std::cout << *rrf << std::endl;
                std::cout << "executeForm: ";
                bureaucrat.executeForm(*rrf);
                std::cout << std::endl;
                delete rrf;
                rrf = NULL;
                std::cout << std::endl;
                std::cout << "----------------------------------------------------------------------------" << std::endl << std::endl;
                rrf = someRandomIntern.makeForm("shrubbery creation", "AnotherTree");
                std::cout << *rrf << std::endl;
                std::cout << "signForm: ";
                bureaucrat.signForm(*rrf);
                std::cout << *rrf << std::endl;
                std::cout << "executeForm: ";
                bureaucrat.executeForm(*rrf);
                std::cout << std::endl;
                delete rrf;
                rrf = NULL;
            }
            return (0);
        }
        catch(const std::exception& e)
        {
            if (rrf)
                delete rrf;
            std::cerr << e.what() << std::endl;
            std::cout << std::endl;
            return (1);
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        std::cout << std::endl;
        return (1);
    }
    
}