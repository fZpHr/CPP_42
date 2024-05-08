/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 19:15:36 by hbelle            #+#    #+#             */
/*   Updated: 2024/05/08 22:20:31 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	_odd = -1;
	_status = -1;
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
	{
		_deque = src._deque;
		_deque2 = src._deque2;
		_vector = src._vector;
		_vector2 = src._vector2;
		_odd = src._odd;
		_status = src._status;
	}
	return (*this);
}

void printDeque(std::deque<int> const &deque)
{
	for (size_t i = 0; i < deque.size(); i++)
	{
		std::cout << deque[i];
		if (i + 1 < deque.size())
			std::cout << " ";
	}
}

void PmergeMe::debugDeque(int status)
{
	if (status == 1)
	{
		std::cout << std::endl;
		std::cout << "--------------------------------------" << std::endl;
		std::cout << "Sort 1: ";
		for (size_t i = 0; i < _deque.size(); i++)
		{
			std::cout << "[";
			printDeque(_deque[i]);
			std::cout << "] ";
		}
		if (_odd != -1)
			std::cout << "Odd: " << "[" << _odd << "]" << std::endl;
		std::cout << std::endl;
		std::cout << "Make pairs and handle odd ";
		std::cout << std::endl;
	}
	else if (status == 2)
	{
		std::cout << "--------------------------------------" << std::endl;
		std::cout << "Sort 2: ";
		for (size_t i = 0; i < _deque.size(); i++)
		{
			std::cout << "[";
			printDeque(_deque[i]);
			std::cout << "] ";
		}
		if (_odd != -1)
			std::cout << "Odd: " << "[" << _odd << "]" << std::endl;
		std::cout << std::endl;
		std::cout << "Sort pairs max to min ";
		std::cout << std::endl;
	}
	else if (status == 3)
	{
		std::cout << "--------------------------------------" << std::endl;
		std::cout << "Sort 3: ";
		for (size_t i = 0; i < _deque.size(); i++)
		{
			std::cout << "[";
			printDeque(_deque[i]);
			std::cout << "] ";
		}
		if (_odd != -1)
			std::cout << "Odd: " << "[" << _odd << "]" << std::endl;
		std::cout << std::endl;
		std::cout << "Sort max pair in ascending order";
		std::cout << std::endl;
	}
	else if (status == 4)
	{
		std::cout << "--------------------------------------" << std::endl;
		std::cout << "Sort 4: ";
		for (size_t i = 0; i < _deque.size(); i++)
		{
			std::cout << "[";
			printDeque(_deque[i]);
			std::cout << "] ";
		}
		if (_odd != -1)
			std::cout << "Odd: " << "[" << _odd << "]" << std::endl;
		std::cout << std::endl;
		std::cout << "Add max of pair to the final list: ";
		printDeque(_deque2);
		std::cout << std::endl;
	}
	else if (status == 5)
	{
		std::cout << "--------------------------------------" << std::endl;
		std::cout << "Sort 5: ";
		for (size_t i = 0; i < _deque.size(); i++)
		{
			std::cout << "[";
			printDeque(_deque[i]);
			std::cout << "] ";
		}
		if (_odd != -1)
			std::cout << "Odd: " << "[" << _odd << "]" << std::endl;
		std::cout << std::endl;
		std::cout << "Add the rest of the list (and odd) to the final list" << std::endl;
		std::cout << "using binary search: ";
		printDeque(_deque2);
		std::cout << std::endl;
	}
}

void printVector(std::vector<int> const &vector)
{
	for (size_t i = 0; i < vector.size(); i++)
	{
		std::cout << vector[i];
		if (i + 1 < vector.size())
			std::cout << " ";
	}
}

void	PmergeMe::debugVector(int status)
{
	if (status == 1)
	{
		std::cout << std::endl;
		std::cout << "--------------------------------------" << std::endl;
		std::cout << "Sort 1: ";
		for (size_t i = 0; i < _vector.size(); i++)
		{
			std::cout << "[";
			printVector(_vector[i]);
			std::cout << "] ";
		}
		if (_odd != -1)
			std::cout << "Odd: " << "[" << _odd << "]" << std::endl;
		std::cout << std::endl;
		std::cout << "Make pairs and handle odd ";
		std::cout << std::endl;
	}
	else if (status == 2)
	{
		std::cout << "--------------------------------------" << std::endl;
		std::cout << "Sort 2: ";
		for (size_t i = 0; i < _vector.size(); i++)
		{
			std::cout << "[";
			printVector(_vector[i]);
			std::cout << "] ";
		}
		if (_odd != -1)
			std::cout << "Odd: " << "[" << _odd << "]" << std::endl;
		std::cout << std::endl;
		std::cout << "Sort pairs max to min ";
		std::cout << std::endl;
	}
	else if (status == 3)
	{
		std::cout << "--------------------------------------" << std::endl;
		std::cout << "Sort 3: ";
		for (size_t i = 0; i < _vector.size(); i++)
		{
			std::cout << "[";
			printVector(_vector[i]);
			std::cout << "] ";
		}
		if (_odd != -1)
			std::cout << "Odd: " << "[" << _odd << "]" << std::endl;
		std::cout << std::endl;
		std::cout << "Sort max pair in ascending order";
		std::cout << std::endl;
	}
	else if (status == 4)
	{
		std::cout << "--------------------------------------" << std::endl;
		std::cout << "Sort 4: ";
		for (size_t i = 0; i < _vector.size(); i++)
		{
			std::cout << "[";
			printVector(_vector[i]);
			std::cout << "] ";
		}
		if (_odd != -1)
			std::cout << "Odd: " << "[" << _odd << "]" << std::endl;
		std::cout << std::endl;
		std::cout << "Add max of pair to the final list: ";
		printVector(_vector2);
		std::cout << std::endl;
	}
	else if (status == 5)
	{
		std::cout << "--------------------------------------" << std::endl;
		std::cout << "Sort 5: ";
		for (size_t i = 0; i < _vector.size(); i++)
		{
			std::cout << "[";
			printVector(_vector[i]);
			std::cout << "] ";
		}
		if (_odd != -1)
			std::cout << "Odd: " << "[" << _odd << "]" << std::endl;
		std::cout << std::endl;
		std::cout << "Add the rest of the list (and odd) to the final list" << std::endl;
		std::cout << "using binary search: ";
		printVector(_vector2);
		std::cout << std::endl;
	}
}

bool PmergeMe::ComparePairsDeque(const std::deque<int>& a, const std::deque<int>& b)
{
	return (a[0] < b[0]);
}

bool PmergeMe::ComparePairsVector(const std::vector<int>& a, const std::vector<int>& b)
{
	return (a[0] < b[0]);
}

/**
 * @brief Add the rest of the list (and odd) to the final list using binary search (lower_bound)
*/
void	PmergeMe::mySort5()
{
	if (_status == 0)
	{
		for (size_t i = 0; i < _deque.size(); i++)
		{
			int element_to_insert = _deque[i][0];
			std::deque<int>::iterator position = std::lower_bound(_deque2.begin(), _deque2.end(), element_to_insert);
			_deque2.insert(position, element_to_insert);
			if (!_deque.empty() && !_deque[i].empty())
			{
				_deque[i].pop_front();
			}
		}
		if (_odd != -1)
		{
			std::deque<int>::iterator position = std::lower_bound(_deque2.begin(), _deque2.end(), _odd);
			_deque2.insert(position, _odd);
		}
	}
	else
	{
		for (size_t i = 0; i < _vector.size(); i++)
		{
			int element_to_insert = _vector[i][0];
			std::vector<int>::iterator position = std::lower_bound(_vector2.begin(), _vector2.end(), element_to_insert);
			_vector2.insert(position, element_to_insert);
			if (!_vector.empty() && !_vector[i].empty())
			{
				_vector[i].pop_back();
			}
		}
		if (_odd != -1)
		{
			std::vector<int>::iterator position = std::lower_bound(_vector2.begin(), _vector2.end(), _odd);
			_vector2.insert(position, _odd);
		}
	}
}

/**
 * @brief Push all first element of the pairs, previously sorted, to the final list
*/
void	PmergeMe::mySort4()
{
	if (_status == 0)
	{
		for (size_t i = 0; i < _deque.size(); i++)
		{
			_deque2.push_back(_deque[i][0]);
			if (!_deque.empty() && !_deque[i].empty())
			{
				_deque[i].pop_front();
			}
		}
	}
	else
	{
		for (size_t i = 0; i < _vector.size(); i++)
		{
			_vector2.push_back(_vector[i][0]);
			if (!_vector.empty() && !_vector[i].empty())
			{
				_vector[i].erase(_vector[i].begin());
			}
		}
	}
}

/**
 * @brief Sort all pairs in ascending order recursively for deque
*/
void PmergeMe::mySort3deque(std::deque<std::deque<int> >::iterator begin, std::deque<std::deque<int> >::iterator end)
{
	if (end - begin <= 1)
		return;
	std::deque<std::deque<int> >::iterator middle = begin + (end - begin) / 2;
	mySort3deque(begin, middle);
	mySort3deque(middle, end);
	std::inplace_merge(begin, middle, end, ComparePairsDeque);
}

/**
 * @brief Sort all pairs in ascending order recursively for vector
*/
void PmergeMe::mySort3vector(std::vector<std::vector<int> >::iterator begin, std::vector<std::vector<int> >::iterator end)
{
	if (end - begin <= 1)
		return;
	std::vector<std::vector<int> >::iterator middle = begin + (end - begin) / 2;
	mySort3vector(begin, middle);
	mySort3vector(middle, end);
	std::inplace_merge(begin, middle, end, ComparePairsVector);
}

/**
 * @brief Sort pairs max to min
*/
void	PmergeMe::mySort2()
{
	if (_status == 0)
	{
		for (size_t i = 0; i < _deque.size(); i++)
		{
			if (_deque[i][0] < _deque[i][1])
			{
				std::swap(_deque[i][0], _deque[i][1]);
			}
		}
	}
	else
	{
		for (size_t i = 0; i < _vector.size(); i++)
		{
			if (_vector[i][0] < _vector[i][1])
			{
				std::swap(_vector[i][0], _vector[i][1]);
			}
		}
	}
}

/**
 * @brief Handle the sort of the array type (deque or vector) and sort it in 5 steps
 * 				1. Make pairs and if odd number, store it
 * 				2. Sort pairs (max to min)
 * 				3. Sort max pair in ascending order recursively
 * 				4. Add all max of pair previously sorted to the final list
 * 				5. Add the rest of the list (and odd) to the final list using binary search (lower_bound)
 * @param arrayNumbers input array
 */
void	PmergeMe::mySort(std::vector<int> *arrayNumbers)
{
	if (_status == 0)
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
		if (DEBUG)
			debugDeque(1);
		mySort2();
		if (DEBUG)
			debugDeque(2);
		mySort3deque(_deque.begin(), _deque.end());
		if (DEBUG)
			debugDeque(3);
		mySort4();
		if (DEBUG)
			debugDeque(4);
		mySort5();
		if (DEBUG)
			debugDeque(5);
	}
	else if (_status == 1)
	{
		for (size_t i = 0; i < arrayNumbers->size(); i+=2)
		{
			if (i + 1 >= arrayNumbers->size() && i % 2 == 0)
			{
				_odd = (*arrayNumbers)[i];
				break;
			}
			std::vector<int> tmp_vector;
			tmp_vector.push_back((*arrayNumbers)[i]);
			if (i + 1 < arrayNumbers->size())
				tmp_vector.push_back((*arrayNumbers)[i + 1]);
			_vector.push_back(tmp_vector);
		}
		if (DEBUG)
			debugVector(1);
		mySort2();
		if (DEBUG)
			debugVector(2);
		mySort3vector(_vector.begin(), _vector.end());
		if (DEBUG)
			debugVector(3);
		mySort4();
		if (DEBUG)
			debugVector(4);
		mySort5();
		if (DEBUG)
			debugVector(5);
	}
}

/**
 * @brief launch the sort and print the result
 * 
 * @param arrayNumbers 	input array
 * @param status status of the array(0 for deque, 1 for vector)
 */
void	PmergeMe::exec(std::vector<int> *arrayNumbers, int status)
{
	int many = 0;
	int i = 1;
	_status = status;
	mySort(arrayNumbers);
	if (_status == 1)
	{
		std::cout << "After:  ";
		for (size_t j = 0; j < _vector2.size(); j++)
		{
			if (i == 6)
			{
				many = 1;
				std::cout << "[...]";
			}
			if (many == 0)
			{
				std::cout << _vector2[j] << " ";
			}
			i++;
		}
		std::cout << std::endl;
	}
	else if (_status == 0 && DEBUG)
	{
		std::cout << "After:  ";
		for (size_t j = 0; j < _deque2.size(); j++)
		{
			if (i == 6)
			{
				many = 1;
				std::cout << "[...]";
			}
			if (many == 0)
			{
				std::cout << _deque2[j] << " ";
			}
			i++;
		}
		std::cout << std::endl;
	}
}
