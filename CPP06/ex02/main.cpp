/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:07:39 by hbelle            #+#    #+#             */
/*   Updated: 2024/05/08 16:41:48 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
    Base *random[10];
    for (int i = 0; i < 10; i++) 
	{
		std::cout << "Generate " << i + 1<< ": ";
        random[i] = generate();
        std::cout << "Identify with PTR " << i + 1 << ": ";
		identifyPtr(random[i]);
        std::cout << "Identify with REF " << i + 1  << ": ";
		identifyRef(*random[i]);
		std::cout << "--------------------------------------------------" << std::endl;
        std::cout << std::endl;
		
    }
	std::cout << "Delete all: " << std::endl << std::endl;

    for (int i = 0; i < 10; i++)
        delete random[i];
}