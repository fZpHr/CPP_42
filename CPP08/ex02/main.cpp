/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:52:57 by hbelle            #+#    #+#             */
/*   Updated: 2024/05/01 14:09:51 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

//Subject main

// int main()
// {
// MutantStack<int> mstack;
// mstack.push(5);
// mstack.push(17);
// std::cout << mstack.top() << std::endl;
// mstack.pop();
// std::cout << mstack.size() << std::endl;
// mstack.push(3);
// mstack.push(5);
// mstack.push(737);
// //[...]
// mstack.push(0);
// MutantStack<int>::iterator it = mstack.begin();
// MutantStack<int>::iterator ite = mstack.end();
// ++it;
// --it;
// while (it != ite)
// {
// std::cout << *it << std::endl;
// ++it;
// }
// std::stack<int> s(mstack);
// return 0;
// }

//My main

#include <ctime>
#include <cstdlib>
int main()
{
	MutantStack<int> stack;
	for (int i = 0; i < 10; i++)
		stack.push(rand() % 100);
	std::cout << "Current top: " << stack.top() << std::endl;
	std::cout << "Current size: " << stack.size() << std::endl;
	std::cout << "_____________________________________" << std::endl;
	std::cout << std::endl;
	std::cout << "Deleting top element..." << std::endl;
	std::cout << "_____________________________________" << std::endl;
	stack.pop();
	std::cout << "Top after pop: " << stack.top() << std::endl;
	std::cout << "Size after pop: " << stack.size() << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "Adding element 42" << std::endl;
	std::cout << "_____________________________________" << std::endl;
	stack.push(42);
	std::cout << "Top after push: " << stack.top() << std::endl;
	std::cout << "Size after push: " << stack.size() << std::endl;
	std::cout << "_____________________________________" << std::endl;
	std::cout << std::endl;
	std::cout << "Printing stack with iterator..." << std::endl;
	std::cout << "_____________________________________" << std::endl;
	std::cout << std::endl;
	MutantStack<int>::iterator it = stack.begin();
	MutantStack<int>::iterator ite = stack.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "_____________________________________" << std::endl;
	std::cout << std::endl;
	std::cout << "Creating a copy of the stack..." << std::endl;
	std::cout << "_____________________________________" << std::endl;
	std::stack<int> s(stack);
	std::cout << "Top of the copy: " << s.top() << std::endl;
	std::cout << "Size of the copy: " << s.size() << std::endl;
	std::cout << "_____________________________________" << std::endl;
	std::cout << std::endl;
	std::cout << "Printing the copy with iterator..." << std::endl;
	std::cout << "_____________________________________" << std::endl;
	std::cout << std::endl;
	MutantStack<int>::iterator its = stack.begin();
	MutantStack<int>::iterator ites = stack.end();
	while (its != ites)
	{
		std::cout << *its << std::endl;
		++its;
	}
	return 0;
}