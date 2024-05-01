/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:10:10 by hbelle            #+#    #+#             */
/*   Updated: 2024/05/01 14:16:38 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>

//Subject main:------------------

// int main()
// {
// 	Span sp = Span(5);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;

// 	return 0;
// }



//My main:---------------------

int main()
{
	try
	{
		std::cout << "__________________________________" << std::endl;
		std::cout << "Init sp..." << std::endl;
		Span sp = Span(5);
		std::cout << "Success" << std::endl;
		std::cout << "----------------------------------" << std::endl;
		std::cout << "Init sp2..." << std::endl;
		Span sp2 = Span(10000);
		std::cout << "Success" << std::endl;
		try
		{
			std::cout << "__________________________________" << std::endl;
			std::cout << "Adding numbers :  5, 3, 17, 9, 11" << std::endl;
			std::cout << "Adding numbers 5...   ";
			sp.addNumber(5);
			std::cout << "Success 1/5" << std::endl;
			std::cout << "------------------------------------------" << std::endl;
			std::cout << "Adding numbers -2147483648... ";
			sp.addNumber(-2147483648);
			std::cout << "Success 2/5" << std::endl;
			std::cout << "------------------------------------------" << std::endl;
			std::cout << "Adding numbers 2147483647...  ";
			sp.addNumber(2147483647);
			std::cout << "Success 3/5" << std::endl;
			std::cout << "----------------------------------" << std::endl;
			std::cout << "Adding numbers 9...   ";
			sp.addNumber(9);
			std::cout << "Success 4/5" << std::endl;
			std::cout << "----------------------------------" << std::endl;
			std::cout << "Adding numbers 11...  ";
			sp.addNumber(11);
			std::cout << "Success 5/5" << std::endl;
			//std::cout << "----------------------------------" << std::endl;
			// std::cout << "Adding numbers 45...  ";
			// sp.addNumber(45);			
			std::cout << std::endl;
			std::cout << "__________________________________" << std::endl;
			std::cout << "Shortest span: ";
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << "__________________________________" << std::endl;
			std::cout << "Longest span: ";
			std::cout << sp.longestSpan() << std::endl;
			std::cout << std::endl;
			std::cout << "__________________________________" << std::endl;
			std::cout << "Adding multiple numbers (10000)" << std::endl;
			std::vector<int> largeArray;
			std::srand(std::time(NULL));
			for (int i = 1; i < 10000; i++)
				largeArray.push_back(rand());
			std::cout << "Adding multiple numbers... ";
			sp2.addMultipleNumbers(largeArray);
			std::cout << "Success" << std::endl;
			for (int i = 0; i < 9999; i++)
			{
				std::cout << ", ";
				std::cout << largeArray[i];
			}
			std::cout << std::endl;
			std::cout << "__________________________________" << std::endl;
			std::cout << "Shortest span: ";
			std::cout << sp2.shortestSpan() << std::endl;
			std::cout << "__________________________________" << std::endl;
			std::cout << "Longest span: ";
			std::cout << sp2.longestSpan() << std::endl;
			
			
		}
		catch (std::exception &e)
		{
			std::cerr << "Fail: ";
			std::cerr << e.what() << std::endl;
			return (1);
		}
	}
	catch (std::exception &e)
	{
		std::cerr << "Fail: ";
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}