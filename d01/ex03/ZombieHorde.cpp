#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	this->_zombies = new Zombie[n];
	this->_n = n;
}

ZombieHorde::~ZombieHorde()
{
}

void	ZombieHorde::announce(void)
{
	int i;

	i = 0;
	while (i < this->_n)
	{
		_zombies[i].announce();
		i++;
	}
}