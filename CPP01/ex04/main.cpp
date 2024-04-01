/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 20:02:45 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/01 18:59:22 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>

void	ft_replace(std::string &line, std::string str_find, std::string str_replace, int *change)
{
	while (line.find(str_find) != std::string::npos)
	{
		line = line.substr(0, line.find(str_find)) + str_replace + line.substr(line.find(str_find) + str_find.length());
		*change = 1;
	}
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: ./sed_is_for_losers [filename] [string1 find] [string2 replace]" << std::endl;
		return (1);
	}
	else
	{
		int change = 0;
		std::string filename = av[1];
		std::string str_find = av[2];
		std::string str_replace = av[3];
		std::string tmp;
		std::ifstream ifs(filename.c_str());
		if (!ifs)
		{
			std::cerr << "Error: could not open file" << std::endl;
			return (1);
		}
		std::string line;
		std::ofstream ofs((filename + ".replace").c_str());
		if (!ofs)
		{
			std::cerr << "Error: could not create file" << std::endl;
			ifs.close();
			return (1);
		}
		while (std::getline(ifs, line))
		{
			ft_replace(line, str_find, str_replace, &change);
			ofs << line << std::endl;
		}
		ifs.close();
		ofs.close();
		if (change == 0)
		{
			std::cerr << "Error: string not found" << std::endl;
			std::remove(((filename + ".replace").c_str()));
			return (1);
		}
		else
			std::cout << "File " << filename << " has been successfully replaced" << std::endl;
		return (0);
	}
}
