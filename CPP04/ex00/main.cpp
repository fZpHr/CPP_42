/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:52:21 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/09 19:31:23 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << std::endl;
		std::cout << "Animal type: " << i->getType() << ". What does the cat say ?" << std::endl;
		i->makeSound(); //will output the cat sound!
		std::cout << "Animal type: " << j->getType() << ". What does the dog say ?" << std::endl;
		j->makeSound();
		std::cout << "Animal type: " << meta->getType() << ". What does the animal say ?" << std::endl;
		meta->makeSound();
		std::cout << std::endl;
		std::cout << "Delete :" << std::endl;
		delete meta;
		delete j;
		delete i;
	}
	std::cout << std::endl;
	std::cout << "------------------------------------------------------------" << std::endl;
	std::cout << std::endl;
	{
		const WrongAnimal* meta2 = new WrongAnimal();
		const WrongAnimal* i2 = new WrongCat();
		std::cout << std::endl;
		std::cout << "Animal type: " << i2->getType() << ". What does the wrongcat say ?" << std::endl;
		i2->makeSound(); //will output the cat sound!
		std::cout << "Animal type: " << meta2->getType() << ". What does the wronganimal say ?" << std::endl;
		meta2->makeSound();
		std::cout << std::endl;
		std::cout << "Delete :" << std::endl;
		delete meta2;
		delete i2;
	}
	
	return 0;
}