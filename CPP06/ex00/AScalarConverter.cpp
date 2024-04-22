/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AScalarConverter.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:28:13 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/22 18:25:28 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AScalarConverter.hpp"

AScalarConverter::AScalarConverter()
{
	std::cout << "Constructor ScalarConverter called" << std::endl; 
}

AScalarConverter::AScalarConverter(AScalarConverter const &src)
{
	*this = src;
	std::cout << "Constructor copy ScalarConverter called" << std::endl; 
}

AScalarConverter::~AScalarConverter()
{
	std::cout << "Destructor ScalarConverter called" << std::endl; 
}

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (2048);
	return (0);
}

size_t	ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	convertChar(std::string const &str)
{
	if (str == "nan" || str == "nanf" || str == "+inf" || str == "+inff" || str == "-inf" || str == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	char *endptr;
	int c = std::strtol(str.c_str(), &endptr, 10);
	if (*endptr == '\0' || (*endptr == '.' && ft_strlen(str.c_str()) != 1))
	{
		if (c >= 32 && c <= 126)
			std::cout << "char: \"" << static_cast<char>(c) << "\"" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
}

void	convertInt(std::string const &str)
{
	if (str == "nan" || str == "nanf" || str == "+inf" || str == "+inff" || str == "-inf" || str == "-inff")
	{
		std::cout << "int: impossible" << std::endl;
		return ;
	}
	char *endptr;
	int i = std::strtol(str.c_str(), &endptr, 10);
	if (*endptr == '\0' || (*endptr == '.' && ft_strlen(str.c_str()) != 1))
		std::cout << "int: " << i << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
}

void	convertFloat(std::string const &str)
{
	if (str == "nan" || str == "nanf" || str == "+inf" || str == "+inff" || str == "-inf" || str == "-inff")
	{
		std::cout << "float: " << str << "f" << std::endl;
		return ;
	}
	char *endptr;
	float f = std::strtof(str.c_str(), &endptr);
	if (*endptr == '\0' || ft_isdigit(*(endptr - 1)))
	{
		std::cout << "float: ";
		print_fixed(f, 0);
		std::cout << "f" << std::endl;
	}
	else
		std::cout << "float: impossible" << std::endl;
}

void 	convertDouble(std::string const &str)
{
	if (str == "nan" || str == "nanf" || str == "+inf" || str == "+inff" || str == "-inf" || str == "-inff")
	{
		std::cout << "double: " << str << std::endl;
		return ;
	}
	char *endptr;
	double d = std::strtod(str.c_str(), &endptr);
	if (*endptr == '\0' || ft_isdigit(*(endptr - 1)))
	{
		std::cout << "double: ";
		print_fixed(d, 0);
		std::cout << std::endl;
	}
	else
		std::cout << "double: impossible" << std::endl;
}

void	AScalarConverter::convert(std::string const &str)
{
	if (ft_strlen(str.c_str()) == 0)
		throw std::invalid_argument("Empty string is not a valid input");
	convertChar(str);
	convertInt(str);
	convertFloat(str);
	convertDouble(str);
}
