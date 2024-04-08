/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:56:50 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/08 17:10:49 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog &src);
		Dog &operator=(const Dog &src);
		
		void makeSound() const;
		Brain *getBrain() const;
		void setBrain(Brain *brain);
	private:
		Brain *_brain;
};

#endif