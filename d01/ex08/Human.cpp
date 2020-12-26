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

typedef void(Human::*PTR) (std::string const &);

void	Human::action(std::string const & action_name, std::string const & target)
{
	int i;

    std::string funcs[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	PTR		ptrs[3] = { &Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
    i = 0;
    while (i < 3)
    {
        if (funcs[i].compare(action_name) == 0)
        {  
        	(this->*ptrs[i])(target);
            break ;
        }
        i++;
    }
}