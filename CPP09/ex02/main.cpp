/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:55:59 by hbelle            #+#    #+#             */
/*   Updated: 2024/05/08 19:17:27 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#define RED "\033[31m"
#define END "\033[0m"

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cerr << "Invalid argument" << std::endl;
		std::cerr << "Usage: ./PmergeMe positive numbers" << std::endl; 
		return (1);
	}
	for (int i = 1; i < ac; i++)
	{
		std::string number = av[i];
		for (size_t j = 0; j < number.size(); j++)
		{
			if (!isdigit(number[j]) || number[j] < 0)
			{
				std::cerr << "Invalid argument: " << number[j] << std::endl;
				std::cerr << "Usage: ./PmergeMe " << RED << "POSITIVE NUMBERS" << END << std::endl; 
				return (1);
			}
		}
	}
	std::vector<int> arrayNumbers;
	std::cout << "Before: " ;
	int many = 0;
	for (int i = 1; i < ac; i++)
	{
		std::istringstream iss(av[i]);
		int num;
		iss >> num;
		arrayNumbers.push_back(num);
		if (i == 6)
		{
			many = 1;
			std::cout << "[...]";
		}
		else if (many == 0)
			std::cout << arrayNumbers[i - 1] << " ";
	}
	std::cout << std::endl;
	PmergeMe p;
	{
		clock_t start = clock();
		p.exec(&arrayNumbers, 1);
		clock_t end = clock();
		double duration = (end - start)  / (double)CLOCKS_PER_SEC * 10;
		std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector: ";
		std::cout << std::fixed << std::setprecision(5) << duration;
		std::cout << " us" << std::endl;
	}
	{
		clock_t start = clock();
		p.exec(&arrayNumbers, 0);
		clock_t end = clock();
		double duration = (end - start)  / (double)CLOCKS_PER_SEC * 10;
		std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque: ";
		std::cout << std::fixed << std::setprecision(5) << duration;
		std::cout << " us" << std::endl;
	}
	return (0);
}