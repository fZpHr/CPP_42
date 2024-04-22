/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASerializer.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:27:39 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/18 18:56:09 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASERIALIZER_HPP
# define ASERIALIZER_HPP

#include <iostream>
#include <stdint.h>

struct Data
{
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		bool		_is_married;
		char    	_sex;
		float		_height;
		double		_weight;
		int			_phone_number;
		std::string _darkest_secret;
};

class ASerializer
{
	public:
		ASerializer();
		ASerializer(ASerializer const &src);
		virtual ~ASerializer();

		virtual ASerializer &operator=(ASerializer const &src) = 0;
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif