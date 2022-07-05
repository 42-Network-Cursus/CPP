#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include <string>
# include "AMateria.hpp"

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