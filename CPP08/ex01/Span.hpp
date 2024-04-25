/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:10:25 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/25 20:37:35 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <exception>

class Span
{
	public:
		Span(unsigned int N);
		Span(Span const &src);
		~Span();

		Span	&operator=(Span const &src);

		void	addNumber(int number);
		int		shortestSpan();
		int		longestSpan();
	private:
		Span();
		unsigned int		_size;
		unsigned int		_index;
		int					*_array;
			
};

#endif