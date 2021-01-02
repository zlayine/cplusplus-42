#include "AMateria.hpp"

AMateria::AMateria()
{

}

AMateria::AMateria(AMateria const &src)
{
	*this = src;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	_xp = 0;
}

AMateria::~AMateria()
{

}

AMateria&	AMateria::operator=(AMateria const &rhs)
{
	this->_xp = rhs.getXP();
	this->_type = rhs.getType();
	return *this;
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
