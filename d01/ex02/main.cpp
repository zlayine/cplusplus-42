#include <iostream>
#include <string>
#include "Zombie.cpp"
#include "ZombieEvent.cpp"

int main()
{
	Zombie *z1;
	Zombie *z2;
	ZombieEvent zombieEvent;

	zombieEvent.setZombieType("Kiki");
	z1 = zombieEvent.newZombie("Zouheir");
	z1->announce();
	delete z1;
	zombieEvent.setZombieType("Kiki");
	z2 = zombieEvent.randomChump();
	z2->announce();
	delete z2;
	return (0);
}