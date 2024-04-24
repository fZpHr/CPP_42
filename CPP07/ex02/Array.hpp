/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:31:50 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/23 16:29:19 by hbelle           ###   ########.fr       */
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
		}
		Array(Array const &src)
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
				delete [] _array;
				_array = new T[src._size];
				for (int i = 0; i < src._size; i++)
					_array[i] = src[i];
			}
		}
		Array &operator[](unsigned int i)
		{
			if (i < 0 || i >= _size)
				throw std::runtime_error("Out of range");
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

#endif