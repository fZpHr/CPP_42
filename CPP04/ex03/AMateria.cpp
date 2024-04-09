/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:52:12 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/09 16:17:36 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const & type) : _type(type)
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(AMateria const &src)
{
	*this = src;
}

AMateria &AMateria::operator=(AMateria const &src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}
