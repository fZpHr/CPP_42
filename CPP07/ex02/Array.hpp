/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:31:50 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/24 17:14:40 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>
#include <cstdlib>


template <typename T>
class Array
{
	public:
		Array() : _array(0), _size(0)
		{}

		Array(unsigned int n)
		{
			if (n > 1000)
				throw std::runtime_error("Array too big");
			_array = new T[n];
			_size = n;
			for (unsigned int i = 0; i < n; i++)
				_array[i] = T();
		}

		Array(Array const &src) : _array(0), _size(0)
		{
			*this = src;
		}

		~Array()
		{
			delete [] _array;
		}

		Array &operator=(Array const &src)
		{
			if (this != &src)
			{
				delete [] this->_array;
				this->_array = new T[src._size];
				for (unsigned int i = 0; i < src._size; i++)
					this->_array[i] = src[i];
			}
			return (*this);
		}

		T		&operator[](unsigned int i)
		{
			if (i >= _size)
				throw std::runtime_error("Out of bounds");
			return (_array[i]);
		}
		const		T		&operator[](unsigned int i) const
		{
			if (i >= _size)
				throw std::runtime_error("Out of bounds");
			return (_array[i]);
		}
		unsigned int	size() const
		{
			return (_size);
		}
		
	private:
		T		*_array;
		unsigned int	_size;
};

template <typename T>
void	outOfBounds(Array<T> &array, int i)
{
	try
	{
		std::cout << array[i] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

#endif