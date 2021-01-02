#include "ScavTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	FragTrap	f1("robot");
	NinjaTrap	n1("ninbot");
	SuperTrap	super("superbot");

	f1.takeDamage(n1.meleeAttack(f1.getName()));

	n1.takeDamage(super.vaulthunter_dot_exe(n1.getName()));
	n1.takeDamage(super.vaulthunter_dot_exe(n1.getName()));

	super.ninjaShoebox(f1);
	super.ninjaShoebox(n1);
	
	return 0;
}