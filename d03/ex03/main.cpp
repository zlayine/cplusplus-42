#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

// output must be checked again
// coplien must be tested
int main()
{
	FragTrap	f1("robot");
	ScavTrap	s1("scavbot");
	NinjaTrap	n1("ninbot");
	NinjaTrap	n2("lazybot");

	s1.takeDamage(f1.meleeAttack(s1.getName()));
	f1.takeDamage(s1.meleeAttack(f1.getName()));
	f1.takeDamage(n1.meleeAttack(f1.getName()));

	s1.takeDamage(f1.vaulthunter_dot_exe(s1.getName()));
	s1.takeDamage(f1.vaulthunter_dot_exe(s1.getName()));

	n1.takeDamage(f1.vaulthunter_dot_exe(n1.getName()));

	f1.beRepaired(100);
	n1.ninjaShoebox(f1);
	n1.ninjaShoebox(s1);
	n1.ninjaShoebox(n2);
	
	return 0;
}