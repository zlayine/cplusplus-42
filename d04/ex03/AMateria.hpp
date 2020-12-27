#ifndef AMATERIA_H
# define AMATERIA_H

class AMateria;
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
	virtual void use(ICharacter & target);
};

#endif