/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 20:02:45 by hbelle            #+#    #+#             */
/*   Updated: 2024/03/27 14:15:07 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>


int main(int ac, char **av)
{
	if (ac != 3)
	{
		std::cout << "Usage: ./Sed_is_for_losers [filename] [string1] [string2]" << std::endl;
		return (1);
	}
	else
	{
		std::string filename = av[1];
		std::string s1 = av[2];
		std::string s2 = av[3];
		std::ifstream ifs(filename);
		if (!ifs)
		{
			std::cout << "Error: could not open file" << std::endl;
			return (1);
		}
		std::string line;
		std::ofstream ofs(filename + ".replace");
		while (std::getline(ifs, line))
		{
			if (line.find(s1) 
		}
	}
}
