/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:29:17 by hbelle            #+#    #+#             */
/*   Updated: 2024/03/22 17:49:27 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>

class Phonebook
{
	public:
		Phonebook();
		~Phonebook();
		void    add();
		void    search();
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _login;
		std::string _postal_address;
		std::string _email_address;
		std::string _phone_number;
		std::string _birthday_date;
		std::string _favorite_meal;
		std::string _underwear_color;
		std::string _darkest_secret;
};

#endif