#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{

	this->_zombies = new Zombie[n];
	this->_n = n;
}

ZombieHorde::~ZombieHorde()
{
	delete[] _zombies;
	std::cout << "Zombies Released" << std::endl;
}

void	ZombieHorde::announce(void)
{
	for (int i = 0 ; i < _n; i++)
	{
		_zombies[i].announce();
	}
}