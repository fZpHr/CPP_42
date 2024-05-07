/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:55:04 by hbelle            #+#    #+#             */
/*   Updated: 2024/05/07 21:30:35 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <deque>

class PmergeMe
{
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &src);
		~PmergeMe();

		PmergeMe	&operator=(const PmergeMe &src);

		void	exec(std::vector<int> *arrayNumbers);
		void	mySort(std::vector<int> *arrayNumbers);
		void	mySort2();
		void	mySort3(std::deque<std::deque<int> >::iterator begin, std::deque<std::deque<int> >::iterator end);
		void	mySort4();
		void	mySort5();
		static bool __attribute__((unused)) ComparePairs(const std::deque<int>& a, const std::deque<int>& b);
		static int __attribute__((unused)) jacobsthal(int n);
	private:
		std::deque<std::deque <int> > _deque;
		std::deque<int> _deque2;
		std::vector<int> _final;
		std::vector<int> _jacobsthal;
		int	_odd;
};


#endif