/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:45:37 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/03 15:38:11 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	std::cout << "Subject test: " << std::endl;
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << std::endl;

	std::cout << "My test: " << std::endl;
	Fixed c(Fixed ( 5464465 ) / (0));
	std::cout << c << std::endl;
	Fixed d(Fixed ( 10 ) / ( 10));
	std::cout << "d: " << d << std::endl;
	std::cout << "d++: " << d++ << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "++d: " << ++d << std::endl;
	std::cout << "d: " << d << std::endl;
	Fixed e(1.00781f);
	std::cout << "e: " << e << std::endl;
	if (e > d || e < d)
		std::cout << "e != d" << std::endl;
	else
		std::cout << "e = d" << std::endl;
	std::cout << "--e: " << --e << std::endl;
	if (e == d)
		std::cout << "e = d" << std::endl;
	else
		std::cout << "e != d" << std::endl;
	return 0;
}