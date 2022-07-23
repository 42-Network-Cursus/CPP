/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:10:09 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/23 11:10:10 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include <string>
# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria* _storage[INVSIZE];
public:
	MateriaSource();
	MateriaSource(MateriaSource const & rhs);
	~MateriaSource();
	MateriaSource& operator=(MateriaSource & rhs);

	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);
};

#endif