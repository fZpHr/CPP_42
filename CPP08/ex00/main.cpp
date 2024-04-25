/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:51:06 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/25 18:42:46 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::cout << "Creating a list of integers..." << std::endl;
	std::list<int>	lst;
	std::cout << "Adding 1, 10, 100, -1 to the list..." << std::endl;
	lst.push_back(1);
	lst.push_back(10);
	lst.push_back(100);
	lst.push_back(-1);
	std::cout << "Trying to find 1, 10, 100, -1, 0 in the list..." << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "If found, the value will be printed." << std::endl;
	std::cout << "If not found, an exception will be thrown." << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
	try
	{

		std::cout << "easyfind(lst, 1): " << easyfind(lst, 1) << std::endl;
		std::cout << "easyfind(lst, 10): " << easyfind(lst, 10) << std::endl;
		std::cout << "easyfind(lst, 100): " << easyfind(lst, 100) << std::endl;
		std::cout << "easyfind(lst, -1): " << easyfind(lst, -1) << std::endl;
		std::cout << "easyfind(lst, 0): " << easyfind(lst, 0) << std::endl;
		std::cout << "-----------------------------------------------" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
		std::cout << "-----------------------------------------------" << std::endl;
		return (1);
	}
	return (0);
}