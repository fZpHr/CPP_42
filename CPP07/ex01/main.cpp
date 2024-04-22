/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:22:00 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/22 19:28:59 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <cctype>

int main( void ) 
{
	std::string array = "salut a tous";
	int len = 15;

	std::cout << array[15] << std::endl;

	iter(array, 15, std::toupper);

	std::cout << array[15] << std::endl;

	return 0;
}