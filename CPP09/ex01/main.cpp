/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:45:35 by hbelle            #+#    #+#             */
/*   Updated: 2024/05/09 14:46:22 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main (int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Invalid argument" << std::endl;
		std::cerr << "Usage: ./RPN expression" << std::endl; 
		return (1);
	}
	std::string expression = av[1];
	std::string operators = "+-*/";
	std::string substr;
	regex_t 	regex;
	regex_t 	regex2;
	int start = 1;
	int another = 0;
	int notalone = 0;

	if (expression.empty() != false)
	{
		std::cout << "Error, empty expression" << std::endl;
		return (1);
	}
	for (size_t i = 0; i < expression.size(); i++)
	{
		if (!isdigit(expression[i]))
		{
			notalone = 1;
		}
	}
	if (notalone == 0)
	{
		std::cout << expression << std::endl;
		return (0);
	}
	regcomp(&regex, "^([0-9]{1} [0-9]{1} [\\+\\*/\\-])$", REG_EXTENDED);
	regcomp(&regex2, "^([0-9]{1} [\\+\\*/\\-])$", REG_EXTENDED);
	try 
	{
		while (expression.size() > 0)
		{
    		size_t pos = expression.find_first_of(operators);
			substr = expression.substr(0, pos + 1);
    		if (pos != std::string::npos)
			{
				if (start == 0)
    		    	substr = expression.substr(1, pos);
				if (another > 1)
				{
					if (substr == "+")
						;
					else if (substr == "-")
						;
					else if (substr == "*")
						;
					else if (substr == "/")
						;
					else
					{
						throw std::invalid_argument("Error, invalid input");
					}
					another = 1;
				}
				else if (regexec(&regex, substr.c_str(), 0, NULL, 0) == 0)
					another++;
				else if (regexec(&regex2, substr.c_str(), 0, NULL, 0) == 0 && start == 0)
					;
				else
				{
					throw std::invalid_argument("Error, invalid input");
				}
			    expression.erase(0, pos + 1);
				start = 0;
    		}
			else 
			{
				throw std::invalid_argument("Error, invalid expression");
    		}
		}
		if (another > 1)
			throw std::invalid_argument("Error, invalid input");
	}
	catch (std::invalid_argument &e)
	{
		regfree(&regex);
		regfree(&regex2);
		std::cerr << e.what() << std::endl;
		return (1);
	}
	regfree(&regex);
	regfree(&regex2);
	RPN rpn(av[1]);
	rpn.exec();
	return (0);
}