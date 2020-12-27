#ifndef RADSCORPION_H
# define RADSCORPION_H

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
	RadScorpion();
	~RadScorpion();

	virtual void	takeDamage(int);
};

#endif