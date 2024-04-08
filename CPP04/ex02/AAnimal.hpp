/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:54:43 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/08 19:42:43 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal
{
	public:
		AAnimal();
		~AAnimal();
		AAnimal(AAnimal const &src);
		AAnimal(std::string type);
		AAnimal &operator=(const AAnimal &src);
		
		std::string getType() const;
		virtual void makeSound() const = 0;
	protected:
		std::string _type;
};

#endif