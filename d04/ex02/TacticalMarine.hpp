#ifndef TACTICALMARINE_H
# define TACTICALMARINE_H

#include <iostream>
#include <string>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
private:
	
public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const &src);
	~TacticalMarine();

    TacticalMarine &    	operator=(TacticalMarine const & rhs);
	virtual ISpaceMarine*	clone() const;
	virtual void			battleCry() const;
	virtual void			rangedAttack() const;
	virtual void			meleeAttack() const;
};

#endif