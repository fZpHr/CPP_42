/* ************************************************************************** */
/*	*/
/*	:::	  ::::::::   */
/*   main.cpp	   :+:	  :+:	:+:   */
/*	+:+ +:+	 +:+	 */
/*   By: hbelle <hbelle@student.42.fr>	  +#+  +:+	   +#+	*/
/*	+#+#+#+#+#+   +#+	   */
/*   Created: 2024/05/01 14:46:30 by hbelle	#+#	#+#	 */
/*   Updated: 2024/05/01 19:19:20 by hbelle	   ###   ########.fr	   */
/*	*/
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main (int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Invalid argument" << std::endl;
		return (1);
	}
	else
	{
		std::string filename = av[1];
		std::ifstream ifs(filename.c_str());
		if (!ifs)
		{
			std::cerr << "Error: could not open file" << std::endl;
			return (1);
		}
		std::string line;
		regex_t regex;
		if (regcomp(&regex, "[0-9]{4}-[0-9]{2}-[0-9]{2},[+-]?[0-9]+( \\| )?[0-9]*$", REG_EXTENDED) != 0)
		{
			std::cerr << "Error: could not compile regex" << std::endl;
			return (1);
		}
		std::getline(ifs, line);
		int i = 0;
		if (line.find("date | value") != std::string::npos)
		{
 			std::cout << "Header found" << std::endl;
			while(std::getline(ifs, line))
			{
				i++;
				if (line.empty() == false && regexec(&regex, line.c_str(), 0, NULL, 0) == 0)
					std::cout << "Matched: " << i << std::endl;
				else
				{
					std::cout << "Not matched" << std::endl;
 					return (1);
 				}
			}
			regfree(&regex);
		}
		else
		{
			std::cerr << "Header not found" << std::endl;
			return (1);
		}
	}
	return (0);
}
