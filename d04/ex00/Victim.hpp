#ifndef VICTIM_H
# define VICTIM_H

#include <iostream>
#include <string>

class Victim
{
protected:
	std::string	_name;
public:
	Victim();
	Victim(Victim const & src);
	Victim(std::string name);
	~Victim();

    Victim &				operator=(Victim const & rhs);
	std::string	getName() const;

	virtual void		getPolymorphed() const;
};

std::ostream &  operator<<(std::ostream & o, Victim const & src);

#endif