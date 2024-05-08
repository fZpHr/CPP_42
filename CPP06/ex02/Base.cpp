/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:39:24 by hbelle            #+#    #+#             */
/*   Updated: 2024/05/08 16:41:39 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
	std::cout << "Base destructor called" << std::endl;
}

Base *generate(void)
{
	int random = rand() % 3;

	if (random == 0)
	{
		std::cout << "A class generated" << std::endl;
		return (new A());
	}
	else if (random == 1)
	{
		std::cout << "B class generated" << std::endl;
		return (new B());
	}
	else
	{
		std::cout << "C class generated" << std::endl;
		return (new C());
	}
}

void identifyPtr(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "is a A, PTR method" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "is a B, PTR method" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "is a C, PTR method" << std::endl;
	else
		std::cout << "Unknown" << std::endl;
}

void identifyRef(Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "is a A, REF method" << std::endl;
	}
	catch(const std::exception &e)
	{
		try
		{
			B &b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "is a B, REF method" << std::endl;
		}
		catch(const std::exception &e)
		{
			try
			{
				C &c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "is a C, REF method" << std::endl;
			}
			catch(const std::exception &e)
			{
				std::cout << "Unknown" << std::endl;
			}
		}
	}
}
