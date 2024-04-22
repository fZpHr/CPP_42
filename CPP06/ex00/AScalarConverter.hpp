/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AScalarConverter.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:28:05 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/22 18:27:27 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASCALARCONVERTER_HPP
# define ASCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>

class AScalarConverter
{
	private:
		AScalarConverter();
		AScalarConverter(AScalarConverter const &src);
		~AScalarConverter();
		virtual AScalarConverter &operator=(AScalarConverter const &src) const = 0;
	public:
		static void convert(std::string const &str);
};

template <typename T>
void print_fixed(T value, bool status) 
{

	T number = status ? static_cast<double>(value) : static_cast<float>(value);
    int factor = 10;
    int whole = static_cast<int>(number);
    int fractional = static_cast<int>((number - whole) * factor + 0.5);
    std::cout << whole << "." << fractional;
}
static void convertChar(std::string const &str) __attribute__((unused));
static void convertInt(std::string const &str) __attribute__((unused));
static void convertFloat(std::string const &str) __attribute__((unused));
static void convertDouble(std::string const &str) __attribute__((unused));

#endif
