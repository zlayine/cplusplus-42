#include <iostream>
#include <string>
#include <list>
#include "Zombie.cpp"
#include "ZombieHorde.cpp"

int main()
{
	ZombieHorde *horde = new ZombieHorde(10);
	horde->announce();
	delete horde;
	return (0);
}