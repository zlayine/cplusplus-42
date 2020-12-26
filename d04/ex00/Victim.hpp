#ifndef VICTIM_H
# define VICTIM_H

#include <iostream>
#include <string>

class Victim
{
protected:
	std::string	_name;
public:
	Victim(std::string name);
	~Victim();

	std::string	getName() const;

	virtual void		getPolymorphed() const;
};

std::ostream &  operator<<(std::ostream & o, Victim const & src);

#endif