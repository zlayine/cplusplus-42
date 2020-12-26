#ifndef ZOMBIE_HORDE_H
# define ZOMBIE_HORDE_H

#include "Zombie.hpp"

class ZombieHorde
{
private:
	Zombie 		*_zombies;
	int			_n;

public:
	ZombieHorde(int n);
	~ZombieHorde();

	void	announce(void);
};

#endif