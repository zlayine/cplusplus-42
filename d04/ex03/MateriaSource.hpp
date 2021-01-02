#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*_materias[4];
	int			_current;
public:
	MateriaSource();
	MateriaSource(MateriaSource const &src);
	~MateriaSource();

	MateriaSource&	operator=(MateriaSource const &rhs);
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif