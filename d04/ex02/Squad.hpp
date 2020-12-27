#ifndef SQUAD_H
# define SQUAD_H

#include <iostream>
#include <string>
#include "ISquad.hpp"

class Squad : public ISquad
{
private:
	int				_cap;
	int				_current;
	ISpaceMarine	**_marines;

	void			expand();
public:
	Squad();
	Squad(Squad const &);
	~Squad();

    Squad &    operator=(Squad const &);

	int				getCount() const;
	ISpaceMarine* 	getUnit(int) const;
	int				push(ISpaceMarine*);

	int				getCap() const;
	ISpaceMarine	**getUnits() const;
	void			setMarines(ISpaceMarine **);
};

#endif