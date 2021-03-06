#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(Ice const &cpy)
{
	*this = cpy;
}

Ice&	Ice::operator=(Ice const &rhs)
{
	this->_xp = rhs.getXP();
	this->_type = rhs.getType();
	return *this;
}

AMateria*	Ice::clone() const
{
	AMateria *i = new Ice(*this);
	return i;
}

void		Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
