#ifndef CURE_H
# define CURE_H

#include "AMateria.hpp"

class Cure : public AMateria
{

public:
	Cure();
	~Cure();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

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

AMateria*	Cure::clone() const
{
	AMateria *i = new Cure(*this);
	return i;
}

void		use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *";
}


#endif