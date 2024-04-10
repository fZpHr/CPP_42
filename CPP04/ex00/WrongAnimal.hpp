/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:48:44 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/10 18:13:05 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &src);
		WrongAnimal(std::string type);
		virtual ~WrongAnimal();

		WrongAnimal &operator=(WrongAnimal const &src);
		std::string getType() const;
		void makeSound() const;

	protected:
		std::string _type;
};

#endif
