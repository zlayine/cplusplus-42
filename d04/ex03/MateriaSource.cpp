#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	_current = 0;
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;
}

MateriaSource::~MateriaSource()
{
}

MateriaSource&	MateriaSource::operator=(MateriaSource const &rhs)
{
	this->_current = 0;
	for (int i = 0; i < rhs._current; i++)
		delete _materias[i];
	this->_current = 0;
	for (int i = 0; i < rhs._current; i++)
		this->learnMateria(rhs._materias[i]->clone());
	for (int i = rhs._current; i < 4; i++)
		_materias[i] = NULL;
	return *this;
}


void	MateriaSource::learnMateria(AMateria *m)
{
	if (_current < 4)
		_materias[_current++] = m;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < _current; i++)
		if (_materias[i]->getType() == type)
			return _materias[i]->clone();
	return NULL;
}
