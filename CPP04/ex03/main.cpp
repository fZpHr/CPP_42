/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:30:51 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/11 15:23:33 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	std::cout << std::endl;
	std::cout << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << "Trying to use index empty:" << std::endl;
	me->use(2, *bob);
	std::cout << "Trying to use index out of range:" << std::endl;
	me->use(46546546, *bob);
	
	std::cout << std::endl;
	std::cout << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << std::endl;
	std::cout << std::endl;

	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);
	
	std::cout << std::endl;
	std::cout << std::endl;

	Character *tmpc = dynamic_cast<Character *>(me);
	if (tmpc)
	{
		tmp = tmpc->getInventory(0);
		std::cout << "Unequip: " << std::endl;
		me->unequip(0);
		delete tmp;
		std::cout << "Trying to use recent index deleted:" << std::endl;
		tmpc->use(0, *bob);
		std::cout << "Trying to use next index:" << std::endl;
		tmpc->use(1, *bob);
		std::cout << std::endl;
		std::cout << std::endl;
	}
	else
		std::cout << "Couldn't be cast to Character" << std::endl;
	delete bob;
	delete me;
	delete src;
	return 0;
}