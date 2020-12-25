#include "ZombieHorde.hpp"

Zombie	*newZombie(std::string name, std::string type)
{
	Zombie *z = new Zombie(name, type);
	return (z);
}

Zombie	*randomChump(void)
{
    int			r;
	std::string	names[5] = {"Toto", "Tata", "Titi", "Momo", "Koko"};
	Zombie		*zombie;

    r = rand() % 5;
	zombie = newZombie(names[r], "For the horde");
	return (zombie);
}

ZombieHorde::ZombieHorde(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_zombies.push_front(randomChump());
		i++;
	}
}

ZombieHorde::~ZombieHorde()
{

	it = _zombies.begin();
	while (++it != _zombies.end())
	{
		delete *it;
		it++;
	}
}

void	ZombieHorde::announce(void)
{
	it = _zombies.begin();
	while (++it != _zombies.end())
	{
		(*it)->announce();
		it++;
	}
}