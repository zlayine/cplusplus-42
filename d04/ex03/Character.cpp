#include "Character.hpp"

Character::Character()
{
}

Character::Character(Character const &src)
{
	*this = src;
}

Character::Character(std::string name) : _name(name)
{
	_total = 0;
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

Character::~Character()
{
}

Character&	Character::operator=(Character const &rhs)
{
	this->_name = rhs.getName();
	for (int i = 0; i < _total; i++)
		delete _materias[i];
	this->_total = 0;
	for (int i = 0; i < rhs._total; i++)
		this->equip(rhs._materias[i]->clone());
	for (int i = rhs._total; i < 4; i++)
		_materias[i] = NULL;
	return *this;
}

std::string	const & Character::getName() const
{
	return _name;
}

void		Character::equip(AMateria *m)
{
	if (_total < 4 && m)
	{
		for(int i = 0; i < 4 ; i ++)
		{
			if (!_materias[i])
			{
				_materias[i] = m;
				break;
			}
		}
		_total++;
	}
}

void		Character::unequip(int idx)
{
	if (idx < 4 && idx >= 0 && _materias[idx])
	{
		delete _materias[idx];
		_materias[idx] = NULL;
		_total--;
	}
}

void		Character::use(int idx, ICharacter& target)
{
	if (idx < _total && idx >= 0 && _materias[idx])
	{
		_materias[idx]->use(target);
	}
}
