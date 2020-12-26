#include <iostream>
#include <string>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main()
{
	ZombieHorde *horde = new ZombieHorde(10);
	horde->announce();
	delete horde;
	return (0);
}