#ifndef SORCERER_H
# define SORCERER_H

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
private:
	std::string	_name;
	std::string	_title;

public:
	Sorcerer();
	Sorcerer(Sorcerer const & src);
	Sorcerer(std::string name, std::string title);
	~Sorcerer();

    Sorcerer &	operator=(Sorcerer const & rhs);

	std::string	getName() const;
	std::string	getTitle() const;

	void		polymorph(Victim const &) const;
};

std::ostream &  operator<<(std::ostream & o, Sorcerer const & src);

#endif