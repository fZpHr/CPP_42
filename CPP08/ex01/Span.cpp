/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:32:06 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/25 20:37:43 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N)
{
	if (N == 0 || N > 1000000)
		throw std::exception("Wrong size");
	_size = N;
	_index = 0;
	_array = new int[_size];
}

Span::Span(Span const &src)
{
	*this = src;
}

Span::~Span()
{
	delete [] _array;
}

Span	&Span::operator=(Span const &src)
{
	if (this != &src)
	{
		_size = src._size;
		_index = src._index;
		_array = new int[_size];
		for (unsigned int i = 0; i < _index; i++)
			_array[i] = src._array[i];
	}
	return *this;
}