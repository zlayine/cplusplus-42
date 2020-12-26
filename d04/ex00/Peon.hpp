#ifndef PEON_H
# define PEON_H

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon : public Victim
{
public:
	Peon(std::string name);
	~Peon();

	virtual void		getPolymorphed() const;
};

#endif