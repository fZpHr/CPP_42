/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:29:17 by hbelle            #+#    #+#             */
/*   Updated: 2024/03/27 17:14:51 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"


class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
    	void addContact(int index);
    	void searchContact(int index);
		void index(int index);
	private :
		Contact contacts[8];
};

#endif