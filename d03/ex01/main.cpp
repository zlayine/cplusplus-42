#include "FragTrap.hpp"
#include "ScavTrap.hpp"

// output must be checked again
int main()
{
	FragTrap	f1("robot");
	FragTrap	f2("shoebox");

	f2.takeDamage(f1.meleeAttack(f2.getName()));
	f1.takeDamage(f2.meleeAttack(f1.getName()));
	f1.takeDamage(f2.vaulthunter_dot_exe(f1.getName()));
	f1.beRepaired(150);
	f2.takeDamage(f1.vaulthunter_dot_exe(f2.getName()));


	return 0;
}