/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASerializer.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:27:22 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/18 18:17:53 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASerializer.hpp"

ASerializer::ASerializer()
{
	std::cout << "ASerializer constructor called" << std::endl;
}

ASerializer::ASerializer(ASerializer const &src)
{
	*this = src;
	std::cout << "ASerializer copy constructor called" << std::endl;
}

ASerializer::~ASerializer()
{
	std::cout << "ASerializer destructor called" << std::endl;
}

uintptr_t ASerializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* ASerializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

