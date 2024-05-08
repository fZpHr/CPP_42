/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:55:59 by hbelle            #+#    #+#             */
/*   Updated: 2024/05/08 22:21:39 by hbelle           ###   ########.fr       */
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
		if (number.empty() == true)
		{
			std::cerr << "Invalid argument: " << number << std::endl;
			std::cerr << "Usage: ./PmergeMe " << RED << "POSITIVE NUMBERS" << END << std::endl; 
			return (1);
		}
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

// <!-- Merge-insertion sort performs the following steps, on an input X of N elements:[6]

// 1 - Group the elements of X into [N/2] pairs of elements, arbitrarily, leaving one element unpaired if there is an odd number of elements.
// 2 - Perform [N/2] comparisons, one per pair, to determine the larger of the two elements in each pair.
// 3 - Recursively sort the [N/2] larger elements from each pair, creating a sorted sequence 
// S of [N/2] of the input elements, in ascending order.
// 4 - Insert at the start of S the element that was paired with the first and smallest element of S.
// 5 - Insert the remaining [N/2]-1 elements of X\S into S, one at a time, with a specially chosen insertion ordering described below. Use binary search in subsequences of S (as described below) to determine the position at which each element should be inserted.
// The algorithm is designed to take advantage of the fact that the binary searches used to insert elements into S are most efficient (from the point of view of worst case analysis) when the length of the subsequence that is searched is one less than a power of two. This is because, for those lengths, all outcomes of the search use the same number of comparisons as each other.[1] To choose an insertion ordering that produces these lengths, consider the sorted sequence S after step 4 of the outline above (before inserting the remaining elements), and let Xi denote the i-th element of this sorted sequence.
// Thus,

// S = (X1,X2,X3,...),

// where each element Xi with i ≥ 3 is paired with an element Yi < Xi that has not yet been inserted. (There are no elements Y1 or Y2 because X1 and X2 were paired with each other.)
// If N is odd, the remaining unpaired element should also be numbered as Yi with i larger than the indexes of the paired elements. Then, the final step of the outline above can be expanded into the following steps:[1][2][3][4]

// 1 - Partition the uninserted elements Yi into groups with contiguous indexes. There are two elements Y3 and Y4 in the first group, and the sums of sizes of every two adjacent groups form a sequence of powers of two. Thus, the sizes of groups are: 2, 2, 6, 10, 22, 42, ...

// 2 - Order the uninserted elements by their groups (smaller indexes to larger indexes), but within each group order them from larger indexes to smaller indexes. Thus, the ordering becomes

// Y4,Y3,Y6,Y5,Y12,Y11,Y10,Y9,Y8,Y7,Y22,y21...

// 3 - Use this ordering to insert the elements Yi into S. For each element Yi, use a binary search from the start of S up to but not including Xi to determine where to insert Yi. -->

// source : https://en.wikipedia.org/wiki/Merge-insertion_sort