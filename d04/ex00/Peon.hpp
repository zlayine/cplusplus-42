#ifndef PEON_H
# define PEON_H

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon : public Victim
{
public:
	Peon();
	Peon(Peon const & src);
	Peon(std::string name);
	~Peon();

    Peon &				operator=(Peon const & rhs);
	virtual void		getPolymorphed() const;
};

#endif