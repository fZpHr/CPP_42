/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:53:02 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/18 19:02:40 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASerializer.hpp"

int main()
{
	Data data;
	data._first_name = "Serial";
	data._last_name = "Izer";
	data._nickname = "Sizer";
	data._is_married = false;
	data._sex = 'M';
	data._height = 1.75;
	data._weight = 75.5;
	data._phone_number = 123456789;
	data._darkest_secret = "I'm a 42 student";

	std::cout << "Data before: " << &data << std::endl;
	std::cout << "First name: " << data._first_name << std::endl;
	std::cout << "Last name: " << data._last_name << std::endl;
	std::cout << "Nickname: " << data._nickname << std::endl;
	if (data._is_married)
		std::cout << "Is married: yes" << std::endl;
	else
		std::cout << "Is married: no" << std::endl;
	std::cout << "Sex: " << data._sex << std::endl;
	std::cout << "Height: " << data._height << std::endl;
	std::cout << "Weight: " << data._weight << std::endl;
	std::cout << "Phone number: " << data._phone_number << std::endl;
	std::cout << "Darkest secret: " << data._darkest_secret << std::endl;
	std::cout << "---------------------------------" << std::endl;
	std::cout << "Serializing data into uintptr_t..." << std::endl;
	uintptr_t serialized = ASerializer::serialize(&data);
	std::cout << "Serialized uintptr_t: " << serialized << std::endl;
	std::cout << "---------------------------------" << std::endl;
	std::cout << "Deserializing uintptr_t into data..." << std::endl;
	Data *deserialized = ASerializer::deserialize(serialized);
	
	std::cout << "Data after: " << &data <<  std::endl;
	std::cout << "First name: " << deserialized->_first_name << std::endl;
	std::cout << "Last name: " << deserialized->_last_name << std::endl;
	std::cout << "Nickname: " << deserialized->_nickname << std::endl;
	if (deserialized->_is_married)
		std::cout << "Is married: yes" << std::endl;
	else
		std::cout << "Is married: no" << std::endl;
	std::cout << "Sex: " << deserialized->_sex << std::endl;
	std::cout << "Height: " << deserialized->_height << std::endl;
	std::cout << "Weight: " << deserialized->_weight << std::endl;
	std::cout << "Phone number: " << deserialized->_phone_number << std::endl;
	std::cout << "Darkest secret: " << deserialized->_darkest_secret << std::endl;

	return 0;
}