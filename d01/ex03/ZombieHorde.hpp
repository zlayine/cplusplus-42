#ifndef ZOMBIE_HORDE_H
# define ZOMBIE_HORDE_H

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