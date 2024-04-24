/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:39:36 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/24 14:54:50 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template<typename T>
void swap( T &a, T &b )
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T min( T &a, T &b )
{
	return ( a < b ? a : b );
}

template< typename T >
T max( T &a, T &b )
{
	return ( a > b ? a : b );
}
#endif