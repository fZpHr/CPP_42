/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:32:06 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/29 15:53:46 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N)
{
	if (N == 0 || N > 1000000)
		throw std::invalid_argument("Wrong size");
	_size = N;
	_index = 0;
	_array = new long int[_size];
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
		_array = new long int[_size];
		for (unsigned int i = 0; i < _index; i++)
			_array[i] = src._array[i];
	}
	return *this;
}

void	Span::addNumber(int number)
{
	if (_index >= _size)
		throw std::invalid_argument("Array is full");
	_array[_index] = number;
	_index++;
}

long int		Span::shortestSpan()
{
	if (_index <= 1)
		throw std::invalid_argument("Not enough numbers");
	std::sort(_array, _array + _index); 
    long int min = 9223372036854775807;
    for (unsigned int i = 1; i < _index; i++)
        min = std::min(min, _array[i] - _array[i - 1]);
    return (min);
}

long int		Span::longestSpan()
{
	if (_index <= 1)
		throw std::invalid_argument("Not enough numbers");
	std::sort(_array, _array + _index);
	return (_array[_index - 1] - _array[0]);
}

void	Span::addMultipleNumbers(std::vector<int> &numbers)
{
	if (_index + numbers.size() > _size)
		throw std::invalid_argument("Array is full");
	for (unsigned int i = 0; i < numbers.size(); i++)
		_array[_index + i] = numbers[i];
	_index += numbers.size();
}