/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:54:43 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/05 17:57:51 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &src);
		Animal(std::string type);
		Animal &operator=(const Animal &src);
		
		std::string getType() const;
		virtual void makeSound() const = 0;

	protected:
		std::string _type;
};

#endif