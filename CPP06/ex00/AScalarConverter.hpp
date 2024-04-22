/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AScalarConverter.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:28:05 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/22 15:41:31 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASCALARCONVERTER_HPP
# define ASCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>

class AScalarConverter
{
	public:
		AScalarConverter();
		AScalarConverter(AScalarConverter const &src);
		~AScalarConverter();
		virtual AScalarConverter &operator=(AScalarConverter const &src) const = 0;
		
		static void convert(std::string const &str);
};

static void convertChar(std::string const &str) __attribute__((unused));
static void convertInt(std::string const &str) __attribute__((unused));
static void convertFloat(std::string const &str) __attribute__((unused));
static void convertDouble(std::string const &str) __attribute__((unused));

#endif