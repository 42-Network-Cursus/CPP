/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:09:02 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/23 18:01:59 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>
# include <sstream>

# define NB_OF_IDEAS 100

class Brain
{
private:
	std::string _ideas[NB_OF_IDEAS];
public:
	Brain();
	~Brain();
	Brain(Brain const & brain);
	Brain& operator=(const Brain& brain);

	std::string	getIdea(int idx) const;
	void		setIdea(std::string idea, int idx);
};

#endif