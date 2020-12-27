#include "FragTrap.hpp"
#include "ScavTrap.hpp"

// coplien form not done
int main()
{
	FragTrap	f1("robot");
	ScavTrap	s1("scavbot");

	s1.takeDamage(f1.meleeAttack(s1.getName()));
	f1.takeDamage(s1.meleeAttack(f1.getName()));

	s1.takeDamage(f1.vaulthunter_dot_exe(s1.getName()));
	s1.takeDamage(f1.vaulthunter_dot_exe(s1.getName()));
	s1.takeDamage(f1.vaulthunter_dot_exe(s1.getName()));

	f1.beRepaired(100);
	s1.challengeNewcomer(f1.getName());
	s1.challengeNewcomer(f1.getName());

	return 0;
}