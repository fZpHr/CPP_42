/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:55:04 by hbelle            #+#    #+#             */
/*   Updated: 2024/05/06 20:08:33 by hbelle           ###   ########.fr       */
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
		PmergeMe(const int ac);
		PmergeMe(const PmergeMe &src);
		~PmergeMe();

		PmergeMe	&operator=(const PmergeMe &src);

		void	exec(std::vector<int> arrayNumbers[]);
		void	mySort(std::vector<int> arrayNumbers[]);
	private:
		std::deque<int>	*_deque;
};

#endif