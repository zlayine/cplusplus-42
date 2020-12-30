#include "ZombieEvent.hpp"

int main(void)
{
	Zombie *z1;
	Zombie *z2;
	ZombieEvent zombieEvent;

	zombieEvent.setZombieType("Martian");
	z1 = zombieEvent.newZombie("Slen");
	z1->announce();
	delete z1;
	zombieEvent.setZombieType("Earther");
	z2 = zombieEvent.randomChump();
	z2->announce();
	delete z2;
	return (0);
}
