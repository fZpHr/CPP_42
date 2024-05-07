/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:55:59 by hbelle            #+#    #+#             */
/*   Updated: 2024/05/07 14:21:46 by hbelle           ###   ########.fr       */
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
	p.exec(&arrayNumbers);
	//return (0);
}