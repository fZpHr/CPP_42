/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:54:43 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/10 13:57:04 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal
{
	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(AAnimal const &src);
		virtual ~AAnimal();
		
		AAnimal &operator=(AAnimal const &src);
		std::string getType() const;
		virtual void makeSound() const = 0;
	protected:
		std::string type;
};


#endif