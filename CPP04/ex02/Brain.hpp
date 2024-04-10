/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:58:24 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/10 18:15:26 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public:
		Brain();
		Brain(Brain const &src);
		~Brain();

		Brain &operator=(Brain const &src);
		void setIdea(std::string idea, int index);
		std::string getIdea(int index) const;
	private:
		std::string	_ideas[100];
};

#endif