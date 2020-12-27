#ifndef ICE_H
# define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria
{

public:
	Ice();
	Ice(Ice const &);
	~Ice();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);

};

Ice::Ice() : AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(Ice const & cpy)
{
	*this = cpy;
}

AMateria*	Ice::clone() const
{
	AMateria *i = new Ice(*this);
	return i;
}

void		use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *";
}


#endif