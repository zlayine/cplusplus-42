#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	this->_zombies = new Zombie[n];
	this->_n = n;
}

ZombieHorde::~ZombieHorde()
{
	delete this->_zombies;
}

void	ZombieHorde::announce(void)
{
	int i;

	i = 0;
	while (i < this->_n)
	{
		this->_zombies[i]->announce();
		i++;
	}
}