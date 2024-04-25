/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:22:00 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/25 16:27:49 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <cctype>
#include "iter.hpp"

//Correct main

// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
//   o << rhs.get();
//   return o;
// }

// template< typename T >
// void print( T& x )
// {
//   std::cout << x << std::endl;
//   return;
// }

// int main() {
//   int tab[] = { 0, 1, 2, 3, 4 };
//   Awesome tab2[5];

//   iter( tab, 5, print<const int> );
//   iter( tab2, 5, print<Awesome> );

//   return 0;
// }

//My main :

void ft_swap_bool(bool &b)
{
	b = !b;
}

void ft_increment(int &i)
{
	i++;
}

void ft_toupper(char &c)
{
	c = std::toupper(c);
}

int main( void ) 
{
	std::cout << "----With a array of char----" << std::endl;
	std::cout << "string before toupper:" << std::endl;
	std::string array = "salut a tous";
	for (int i = 0; i < 15; i++)
		std::cout << array[i];
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout <<  "toupper on string:" << std::endl;
	iter(array, 15, ft_toupper);
	for (int i = 0; i < 15; i++)
		std::cout << array[i];
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "----With a array of int----" << std::endl;
	std::cout << "array before increment:" << std::endl;
	int array2[5] = {1, 2, 3, 4, 5};
	for (int i = 0; i < 5; i++)
		std::cout << array2[i] << " ";
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Sort array:" << std::endl;
	iter(array2, 5, ft_increment);
	for (int i = 0; i < 5; i++)
		std::cout << array2[i] << " ";
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "----With a array of bool----" << std::endl;
	std::cout << "array before swap:" << std::endl;
	bool array3[5] = {true, false, true, false, true};
	for (int i = 0; i < 5; i++)
		std::cout << array3[i] << " ";
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Swap array:" << std::endl;
	iter(array3, 5, ft_swap_bool);
	for (int i = 0; i < 5; i++)
		std::cout << array3[i] << " ";
	std::cout << std::endl;
	return 0;
}