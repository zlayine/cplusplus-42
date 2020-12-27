#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	_current = 0;
	_matrias[0] = NULL;
	_matrias[1] = NULL;
	_matrias[2] = NULL;
	_matrias[3] = NULL;
}

MateriaSource::~MateriaSource()
{
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (_current < 4)
		_matrias[_current++] = m;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < _current; i++)
		if (_matrias[i]->getType() == type)
			return _matrias[i]->clone();
	return NULL;
}
