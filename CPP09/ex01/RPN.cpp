/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:46:50 by hbelle            #+#    #+#             */
/*   Updated: 2024/05/06 17:39:53 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(std::string expression) : _expression(expression)
{
}

RPN::RPN(const RPN &src)
{
	*this = src;
}

RPN::~RPN()
{
}

RPN &RPN::operator=(const RPN &src)
{
	if (this != &src)
	{
		_expression = src._expression;
	}
	return (*this);
}

void	RPN::exec()
{
	std::stack<double> stack;
	std::istringstream iss(_expression);
	std::string currentStr;

	while (iss >> currentStr)
	{
		if (currentStr == "+")
		{
			double a = stack.top();
			stack.pop();
			double b = stack.top();
			stack.pop();
			stack.push(b + a);
		}
		else if (currentStr == "-")
		{
			double a = stack.top();
			stack.pop();
			double b = stack.top();
			stack.pop();
			stack.push(b - a);
		}
		else if (currentStr == "*")
		{
			double a = stack.top();
			stack.pop();
			double b = stack.top();
			stack.pop();
			stack.push(b * a);
		}
		else if (currentStr == "/")
		{
			double a = stack.top();
			stack.pop();
			double b = stack.top();
			stack.pop();
			if (a == 0 || b == 0)
			{
				std::cerr << "Error, division by zero" << std::endl;
				return ;
			}
			stack.push(b / a);
		}
		else
		{
			std::istringstream iss(currentStr);
			double value;
			iss >> value;
			stack.push(value);
		}
	}
	std::cout << stack.top() << std::endl;
}