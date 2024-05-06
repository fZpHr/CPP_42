/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 19:15:36 by hbelle            #+#    #+#             */
/*   Updated: 2024/05/06 20:09:11 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int ac)
{
	_deque = new std::deque<int>(ac);
}

PmergeMe::PmergeMe(const PmergeMe &src)
{
	*this = src;
}

PmergeMe::~PmergeMe()
{
	delete _deque;
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &src)
{
	if (this != &src)
		_deque = src._deque;
	return (*this);
}

void	PmergeMe::mySort(std::vector<int> arrayNumbers[])
{
	for (size_t i = 1; i < arrayNumbers.size(); i++)
	{
		for (size_t j = 0; j < arrayNumbers[i].size(); j++)
			_deque->push_back(arrayNumbers[i]);
	}
	std::sort(_deque->begin(), _deque->end());
}

void	PmergeMe::exec(std::vector<int> arrayNumbers)
{
	int many = 0;
	
	std::cout << "After: ";
	mySort(arrayNumbers);
	for (int i = 1; i < arrayNumbers.size(); i++)
	{
		if (i == 6)
		{
			many = 1;
			std::cout << "[...]";
		}
		else if (many == 0)
			std::cout << _deque->front() << " ";
	}
	std::cout << std::endl;
}

