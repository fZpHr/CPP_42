/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:43:56 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/15 18:41:22 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public :
		Form(std::string name, int sGrade, int eGrade);
		Form(Form const &src);
		~Form();

		Form &operator=(Form const &src);
		std::string	getName() const;
		int	getGradeSign() const;
		int	getGradeExec() const;
		bool	getSigned() const;
		void	beSigned(Bureaucrat &src);
		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("Grade is too high");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("Grade is too low");
				}
		};
		class EmptyNameException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("Name is empty");
				}
		};
		class FormAlreadySignedException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("Form is already signed");
				}
		};
	private :
		const std::string	_name;
		bool 	_signed;
		const int		_signGrade;
		const int		_execGrade;
};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif