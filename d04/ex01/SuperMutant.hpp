#ifndef SUPERMUTANT_H
# define SUPERMUTANT_H

#include "Enemy.hpp"

class SuperMutant : public Enemy
{

public:
	SuperMutant();
	SuperMutant(SuperMutant const &src);
	~SuperMutant();

    SuperMutant &    operator=(SuperMutant const & rhs);
	virtual void	takeDamage(int);
};

#endif