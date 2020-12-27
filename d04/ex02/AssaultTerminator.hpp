#ifndef ASSAULTTERMINATOR_H
# define ASSAULTTERMINATOR_H

#include <iostream>
#include <string>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
private:
	
public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &);
	~AssaultTerminator();

	virtual ISpaceMarine*	clone() const;
	virtual void			battleCry() const;
	virtual void			rangedAttack() const;
	virtual void			meleeAttack() const;
};


#endif