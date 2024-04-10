/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:56:10 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/10 18:21:17 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		Cat();
		Cat(Cat const &src);
		~Cat();
		
		Cat &operator=(Cat const &src);
		void makeSound() const;
		Brain *getBrain() const;
		void setBrain(Brain *brain);
	private:
		Brain *_brain;
};


#endif