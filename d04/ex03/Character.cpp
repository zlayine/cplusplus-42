#include "Character.hpp"

Character::Character()
{
}

Character::Character(std::string name) : _name(name)
{
	_total = 0;
	_materias[0] = NULL;
	_materias[1] = NULL;
	_materias[2] = NULL;
	_materias[3] = NULL;
}

Character::~Character()
{
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
