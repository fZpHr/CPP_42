/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:54:43 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/09 20:15:10 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public:
		Animal();
		Animal(std::string type);
		Animal(Animal const &src);
		virtual ~Animal();
		
		Animal &operator=(Animal const &src);
		std::string getType() const;
		virtual void makeSound() const;
	protected:
		std::string type;
};

#endif