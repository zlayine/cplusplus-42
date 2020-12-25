#include <iostream>
#include "Human.hpp"

typedef  void (Human::*HumanFunc)(std::string const & target);

void	Human::meleeAttack(std::string const & target)
{
	std::cout << "Melee Attacking " << target << std::endl;
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << "Ranged Attacking " << target << std::endl;
}

void	Human::intimidatingShout(std::string const & target)
{
	std::cout << "Intimidating Shout: " << target << std::endl;
}

void	Human::action(std::string const & action_name, std::string const & target)
{
	HumanFunc funcs[] = { &Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	
}
