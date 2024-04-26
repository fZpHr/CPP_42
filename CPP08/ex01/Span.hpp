/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:10:25 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/26 19:45:31 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>

class Span
{
	public:
		Span(unsigned int N);
		Span(Span const &src);
		~Span();

		Span	&operator=(Span const &src);

		void	addNumber(int number);
		long int		shortestSpan();
		long int		longestSpan();
		void	addMultipleNumbers(std::vector<int> &numbers);
	private:
		Span();
		unsigned int		_size;
		unsigned int		_index;
		long int			*_array;
			
};

#endif