/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:42:51 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/03 15:45:15 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedValue(0)
{
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
}

Fixed::Fixed(int const value)
{
	this->_fixedValue = value << this->_fractionalBits;
}

Fixed::Fixed(float const value)
{
	this->_fixedValue = roundf(value * (1 << this->_fractionalBits));
}

Fixed::~Fixed(void)
{
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	if (this != &rhs)
		this->_fixedValue = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	return this->_fixedValue;
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedValue = raw;
}

float Fixed::toFloat(void) const
{
	return (float)this->_fixedValue / (float)(1 << this->_fractionalBits);
}

int Fixed::toInt(void) const
{
	return this->_fixedValue >> this->_fractionalBits;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return a;
	return b;
}

Fixed Fixed::operator+(Fixed const &rhs) const
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

bool Fixed::operator>(Fixed const &rhs) const
{
	return this->toFloat() > rhs.toFloat();
}

bool Fixed::operator<(Fixed const &rhs) const
{
	return this->toFloat() < rhs.toFloat();
}

bool Fixed::operator>=(Fixed const &rhs) const
{
	return this->toFloat() >= rhs.toFloat();
}

bool Fixed::operator<=(Fixed const &rhs) const
{
	return this->toFloat() <= rhs.toFloat();
}

bool Fixed::operator==(Fixed const &rhs) const
{
	return this->toFloat() == rhs.toFloat();
}

bool Fixed::operator!=(Fixed const &rhs) const
{
	return this->toFloat() != rhs.toFloat();
}

Fixed &Fixed::operator++(void)
{
	this->_fixedValue++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return tmp;
}

Fixed &Fixed::operator--(void)
{
	this->_fixedValue--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return tmp;
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}

