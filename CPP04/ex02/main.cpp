/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:52:21 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/08 19:22:07 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
#define BOLD    "\033[1m"

int main()
{
	{
		std::cout << GREEN << "Create dog: " << std::endl << YELLOW;
		const Dog* j = new Dog();
		std::cout << std::endl;
		std::cout << GREEN << "Create cat: " << std::endl << YELLOW;
		const Cat* i = new Cat();
		std::cout << BLUE << std::endl << GREEN << "Dog type: " << BLUE << j->getType() << ". What does the dog say ?" << std::endl << BLUE;
		j->makeSound();
		std::cout << GREEN << "Set Dog Idea: 0/1/2 " << std::endl;
		j->getBrain()->setIdea("Want to run", 0);
		j->getBrain()->setIdea("Want to eat", 1);
		j->getBrain()->setIdea("Want to sleep", 2);
		std::cout << GREEN << "Dog Idea(0): " << BLUE << j->getBrain()->getIdea(0) << std::endl;
		std::cout << GREEN << "Dog Idea(1): " << BLUE << j->getBrain()->getIdea(1) << std::endl;
		std::cout << GREEN << "Dog Idea(2): " << BLUE << j->getBrain()->getIdea(2) << std::endl << YELLOW;
		std::cout << std::endl;
		std::cout << GREEN << "Delete :" << std::endl << YELLOW;
		delete j;
		std::cout << std::endl << BLUE;
		std::cout << GREEN << "Cat type: " << BLUE << i->getType() << ". What does the cat say ?" << std::endl;
		i->makeSound();
		std::cout << GREEN << "Set Cat Idea: 0/1/2 " << std::endl;
		i->getBrain()->setIdea("Want to play", 0);
		i->getBrain()->setIdea("Want to eat", 1);
		i->getBrain()->setIdea("Want to sleep", 2);
		std::cout << GREEN << "Cat Idea(0): " << BLUE << i->getBrain()->getIdea(0) << std::endl;
		std::cout << GREEN << "Cat Idea(1): " << BLUE << i->getBrain()->getIdea(1) << std::endl;
		std::cout << GREEN << "Cat Idea(2): " << BLUE << i->getBrain()->getIdea(2) << std::endl << YELLOW;
		std::cout << std::endl;
		std::cout << GREEN << "Delete :" << std::endl << YELLOW;
		delete i;
		std::cout << std::endl;
		
	}
	{
		
		AAnimal* array[100];
		for (int i = 0; i < 10; i++)
		{
			if (i > 4)
				array[i] = new Dog();
			else
				array[i] = new Cat();
		}
		for (int i = 0; i < 10; i++)
		{
			delete array[i];
		}
	}
	//std::cout << std::endl << "Try to create a new Animal: " << std::endl;
	//AAnimal* a = new AAnimal();


	return 0;
}