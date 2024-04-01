/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 20:02:45 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/01 18:36:04 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *ptr = &brain;
	std::string &ref = brain;

	std::cout << "Address section : " << std::endl;
	std::cout << "	String: " << &brain << std::endl;
	std::cout << "	Pointer: " << &ptr << std::endl;
	std::cout << "	Reference: " << &ref << std::endl;
	std::cout << std::endl;
	
	std::cout << "Value section : " << std::endl;
	std::cout << "	String: " << brain << std::endl;
	std::cout << "	Pointer: " << *ptr << std::endl;
	std::cout << "	Reference: " << ref << std::endl;

	return (0);
}
