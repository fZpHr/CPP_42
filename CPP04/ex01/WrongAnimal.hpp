/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:48:44 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/09 14:21:51 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(const WrongAnimal &src);
		WrongAnimal(std::string type);
		WrongAnimal &operator=(const WrongAnimal &src);
		
		std::string getType() const;
		void makeSound() const;

	protected:
		std::string _type;
};

#endif
