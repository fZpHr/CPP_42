/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:56:50 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/10 18:21:15 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	public:
		Dog();
		Dog(Dog const &src);
		~Dog();
		
		Dog &operator=(Dog const &src);
		void makeSound() const;
		Brain *getBrain() const;
		void setBrain(Brain *brain);
	private:
		Brain *_brain;
};

#endif