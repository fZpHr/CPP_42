/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASerializer.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:27:39 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/22 17:31:33 by hbelle           ###   ########.fr       */
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
	private:
		ASerializer();
		ASerializer(ASerializer const &src);
		virtual ~ASerializer();

		virtual ASerializer &operator=(ASerializer const &src) = 0;
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif