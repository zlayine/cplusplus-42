#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{

}

ZombieEvent::~ZombieEvent()
{

}

void	ZombieEvent::setZombieType(std::string type)
{
	_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie *z = new Zombie(name, _type);
	return (z);
}

Zombie	*ZombieEvent::randomChump(void)
{
    int			r;
	std::string	names[5] = {"Mandell", "Corn", "Simon", "Momo", "Lin"};
	Zombie		*zombie;

	srand(clock());
    r = rand() % 5;
	zombie = newZombie(names[r]);
	return (zombie);
}
