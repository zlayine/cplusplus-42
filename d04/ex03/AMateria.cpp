#include "AMateria.hpp"

AMateria::AMateria()
{

}

AMateria::AMateria(std::string const & type) : _type(type)
{
	_xp = 0;
}

AMateria::~AMateria()
{

}

std::string const & AMateria::getType() const
{
	return _type;
}

unsigned int AMateria::getXP() const
{
	return _xp;
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	this->_xp += 10;
}
