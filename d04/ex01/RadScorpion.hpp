#ifndef RADSCORPION_H
# define RADSCORPION_H

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
	RadScorpion();
	RadScorpion(RadScorpion const &src);
	~RadScorpion();

    RadScorpion &    operator=(RadScorpion const & rhs);
	virtual void	takeDamage(int);
};

#endif