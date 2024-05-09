/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:13:17 by hbelle            #+#    #+#             */
/*   Updated: 2024/05/09 14:20:39 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
	*this = src;
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &src)
{
	if (this != &src)
	{
		this->_data = src._data;
	}
	return (*this);
}

void BitcoinExchange::parseCsv()
{
	regex_t regex;
	if (regcomp(&regex, "([0-9]{4})-((0[1-9]|1[0-2])-(0[1-9]|1[0-9]|2[0-8])|(0[13-9]|1[0-2])-(29|30)|(0[13578]|1[02])-31|02-29)(,)[+-]?[0-9]+\\.?[0-9]*$", REG_EXTENDED) != 0)
	{
		std::cerr << "Error: could not compile regex" << std::endl;
		exit(1);
	}
	std::ifstream ifs("data.csv");
	if (!ifs)
	{
		std::cerr << "Error: could not open file" << std::endl;
		regfree(&regex);
		exit(1);
	}
	std::string line;
	std::getline(ifs, line);
	if (line.find("date,exchange_rate") != std::string::npos)
	{
		while(std::getline(ifs, line))
		{
			if (line.empty() == false && regexec(&regex, line.c_str(), 0, NULL, 0) == 0)
			{
				std::string date = line.substr(0, 10);
				std::string str = line.substr(11);
				std::istringstream iss(str);
				double value;
				iss >> value;
				this->_data[date] = value;
			}
			else
			{
				std::cerr << "Error: invalid line => " << line << std::endl;
				regfree(&regex);
				exit(1);
			}
		}
	}
	else
	{
		std::cerr << "Error: header not found" << std::endl;
		regfree(&regex);
		exit(1);
	}
	regfree(&regex);
}


void	BitcoinExchange::parseFile(std::string filename)
{
	parseCsv();
	regex_t regex;
	if (regcomp(&regex, "([0-9]{4})-((0[1-9]|1[0-2])-(0[1-9]|1[0-9]|2[0-8])|(0[13-9]|1[0-2])-(29|30)|(0[13578]|1[02])-31|02-29)( \\| )[+-]?[0-9]+\\.?[0-9]*$", REG_EXTENDED) != 0)
	{
		std::cerr << "Error: could not compile regex" << std::endl;
		exit(1);
	}
	std::ifstream ifs(filename.c_str());
	if (!ifs)
	{
		std::cerr << "Error: could not open file" << std::endl;
		regfree(&regex);
		exit(1);
	}
	std::string line;
	std::getline(ifs, line);
	if (line.find("date | value") != std::string::npos)
	{
		while(std::getline(ifs, line))
		{
			if (line.empty() == false && regexec(&regex, line.c_str(), 0, NULL, 0) == 0)
			{
				if (this->_data.find(line.substr(0, 10)) != this->_data.end())
				{
					std::istringstream iss(line.substr(12));
					double value;
					iss >> value;
					if (value < 0)
					{
						std::cerr << "Error: not a positive number." << std::endl;
						continue;
					}
					else if (value > 1000)
					{
						std::cerr << "Error: too large a number." << std::endl;
						continue;
					}
					else
						std::cout << line.substr(0, 10) << " => " << value << " = " << this->_data[line.substr(0, 10)] * value << std::endl;
				}
				else
				{
					std::map<std::string, double>::iterator it = this->_data.lower_bound(line.substr(0, 10));
					if (it == this->_data.begin())
						;
					else
						--it;
					std::istringstream iss(line.substr(12));
					double value;
					iss >> value;
					if (value < 0)
					{
						std::cerr << "Error: not a positive number." << std::endl;
						continue;
					}
					else if (value > 1000)
					{
						std::cerr << "Error: too large a number." << std::endl;
						continue;
					}
					else
						std::cout << line.substr(0, 10) << " => " <<  value << " = " << it->second * value << std::endl;
				}	
			}
			else
			{
				std::cerr << "Error: bad input => " << line << std::endl;
			}
		}
	}
	else
	{
		std::cerr << "Error: header not found" << std::endl;
		regfree(&regex);
		exit(1);
	}
	regfree(&regex);
}
