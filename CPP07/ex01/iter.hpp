/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:16:52 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/24 15:18:29 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename AnyTypeArray, typename Func>
void iter(AnyTypeArray &array, int len, Func function) 
{
    for(int i = 0; i < len; i++)
        array[i] = function(array[i]);
}

#endif