#ifndef AMATERIA_H
# define AMATERIA_H

#include "ICharacter.hpp"

class AMateria
{
private:
	std::string		_type;
	unsigned int 	_xp;

public:
	AMateria();
	AMateria(std::string const & type);
	~AMateria();
	std::string const & getType() const;
	unsigned int getXP() const; 
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

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

}

unsigned int AMateria::getXP() const
{

}

void 		AMateria::use(ICharacter& target) 
{
	_xp += 10;
}

#endif