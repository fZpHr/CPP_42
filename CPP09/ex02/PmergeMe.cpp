/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 19:15:36 by hbelle            #+#    #+#             */
/*   Updated: 2024/05/07 21:53:30 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &src)
{
	*this = src;
}

PmergeMe::~PmergeMe()
{
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &src)
{
	if (this != &src)
		_deque = src._deque;
	return (*this);
}

bool PmergeMe::ComparePairs(const std::deque<int>& a, const std::deque<int>& b)
{
	return (a[0] < b[0]);
}

int PmergeMe::jacobsthal(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return jacobsthal(n - 1) + 2 * jacobsthal(n - 2);
}

void	PmergeMe::mySort5()
{
	for (size_t i = 0; i < _deque.size(); i++)
	{
		_jacobsthal.push_back(jacobsthal(i));
	}
}

void PmergeMe::mySort3(std::deque<std::deque<int> >::iterator begin, std::deque<std::deque<int> >::iterator end)
{
    if (end - begin <= 1)
        return;

    std::deque<std::deque<int> >::iterator middle = begin + (end - begin) / 2;

    mySort3(begin, middle);
    mySort3(middle, end);

    std::inplace_merge(begin, middle, end, ComparePairs);
}

void	PmergeMe::mySort2()
{
	if (_deque.size() <= 1)
		return;
	for (size_t i = 0; i < _deque.size(); i++)
	{
		for (size_t j = 1; j < _deque[i].size(); j++)
		{
			if (_deque[i][j] > _deque[i][j - 1])
			{
				int tmp = _deque[i][j];
				_deque[i][j] = _deque[i][j - 1];
				_deque[i][j - 1] = tmp;
			}
		}
	}
}

void	PmergeMe::mySort4()
{
	for (size_t i = 0; i < _deque.size(); i++)
	{
		_deque2.push_back(_deque[i][0]);
		_deque[i].erase(_deque[i].begin());
	}
	if (_deque[0][1] < _deque2[0])
	{
		_deque2.push_front(_deque[0][1]);
		_deque[0].erase(_deque[0].begin());
	}
}

void	PmergeMe::mySort(std::vector<int> *arrayNumbers)
{
	for (size_t i = 0; i < arrayNumbers->size(); i +=2)
	{
		if (i + 1 >= arrayNumbers->size() && i % 2 == 0)
		{
			_odd = (*arrayNumbers)[i];
			break;
		}
		std::deque<int> tmp_deque;
		tmp_deque.push_back((*arrayNumbers)[i]);
		if (i + 1 < arrayNumbers->size())
			tmp_deque.push_back((*arrayNumbers)[i + 1]);
		_deque.push_back(tmp_deque);
	}
	for (size_t i = 0; i < _deque.size(); i++) 
	{
    	std::cout << "Pair before " << i+1 << ": ";
    	for (size_t j = 0; j < _deque[i].size(); ++j)
		{
       		std::cout << _deque[i][j] << " ";
		}
		std::cout << "| ";
	}
    std::cout << std::endl;
	std::cout << "Odd number: " << _odd;
	std::cout << std::endl;
	mySort2();
	for (size_t i = 0; i < _deque.size(); ++i) 
	{
    	std::cout << "Pair after a" << i+1 << ": ";
   		for (size_t j = 0; j < _deque[i].size(); ++j) 
        	std::cout << _deque[i][j] << " ";
		std::cout << "| ";
    }
	std::cout << std::endl;
	mySort3(_deque.begin(), _deque.end());
	for (size_t i = 0; i < _deque.size(); ++i) 
	{
    	std::cout << "Pair after b" << i+1 << ": ";
   		for (size_t j = 0; j < _deque[i].size(); ++j) 
        	std::cout << _deque[i][j] << " ";
		std::cout << "| ";
    }
	mySort4();
	std::cout << std::endl;
	for (size_t i = 0; i < _deque2.size(); i++)
	{
		std::cout << _deque2[i] << " ";
	}
	std::cout << std::endl;
	for (size_t i = 0; i < _deque.size(); ++i) 
	{
    	std::cout << "Pair swap" << i+1 << ": ";
   		for (size_t j = 0; j < _deque[i].size(); ++j) 
        	std::cout << _deque[i][j] << " ";
		std::cout << "| ";
    }
	mySort5();

	std::cout << std::endl;
	for (size_t i = 0; i < _jacobsthal.size(); i++)
	{
		std::cout << _jacobsthal[i] << " ";
	}
    std::cout << std::endl;
}

void	PmergeMe::exec(std::vector<int> *arrayNumbers)
{
	//int many = 0;
	//int i = 1;

	//std::cout << "After: ";
	mySort(arrayNumbers);
	// for (std::deque<std::deque<int> >::const_iterator it = _deque.begin(); it != _deque.end(); ++it)
    // {
    //     for (std::deque<int>::const_iterator innerIt = it->begin(); innerIt != it->end(); ++innerIt)
	// 	{
	// 		// if (i == 6)
	// 		// {
	// 		// 	many = 1;
	// 		// 	std::cout << "[...]";
	// 		// }
	// 		if (many == 0)
	// 		{
	// 			std::cout << *innerIt << " ";
	// 		}
	// 		i++;
	// 	}
	// }
	// std::cout << std::endl;
}
