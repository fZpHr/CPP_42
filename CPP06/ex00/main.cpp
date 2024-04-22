/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:53:48 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/22 14:15:16 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./convert [string]" << std::endl;
		return (1);
	}
	try 
	{
		AScalarConverter::convert(av[1]);
	}
	catch (std::invalid_argument &e) 
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}