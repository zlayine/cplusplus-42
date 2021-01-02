#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(Cure const & cpy)
{
	*this = cpy;
}

Cure&	Cure::operator=(Cure const &rhs)
{
	this->_xp = rhs.getXP();
	this->_type = rhs.getType();
	return *this;
}

AMateria*	Cure::clone() const
{
	AMateria *i = new Cure(*this);
	return i;
}

void		Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
