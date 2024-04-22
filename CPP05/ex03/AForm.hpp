/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:43:56 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/16 15:00:11 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
# define AForm_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public :
		AForm(std::string name, int sGrade, int eGrade);
		AForm(AForm const &src);
		virtual ~AForm();

		AForm 			&operator=(AForm const &src);
		std::string		getName() const;
		int				getGradeSign() const;
		int				getGradeExec() const;
		bool			getSigned() const;
		void			beSigned(Bureaucrat &src);
		virtual void	execute(Bureaucrat const &executor) const = 0;
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
		class FormNotSignedException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("Form is not signed");
				}
		};
		class FileNotOpenedException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("Couldn't open/write file");
				}
		};
		class FormNotFoundException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("Form not found");
				}
		};
	private :
		const std::string	_name;
		bool 	_signed;
		const int		_signGrade;
		const int		_execGrade;
};

std::ostream &operator<<(std::ostream &out, AForm const &AForm);

#endif