/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:45:35 by hbelle            #+#    #+#             */
/*   Updated: 2024/05/03 19:26:46 by hbelle           ###   ########.fr       */
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
	regex_t regex;
	regcomp(&regex, "\\d123456789-\\+/\\*\\s+", REG_EXTENDED);
	if (expression.empty() != false || regexec(&regex, av[1], 0, NULL, 0) != 0)
	{
		std::cerr << "Invalid expression" << std::endl;
		regfree(&regex);
		return (1);
	}
	RPN rpn(av[1]);
	rpn.parse();
	
	return (0);
}