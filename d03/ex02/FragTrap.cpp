#include "FragTrap.hpp"

FragTrap::FragTrap()
{

}

FragTrap::FragTrap(std::string name) : ClapTrap()
{
	this->_name = name;
	this->_hitp = 100;
	this->_mhitp = 100;
	this->_energyp = 100;
	this->_menergyp = 100;
	this->_level = 1;
	this->_melee_attack_dmg = 30;
	this->_range_attack_dmg = 30;
	this->_armor_reduction = 5;
	std::cout << "Constructor Called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Deconstructor Called" << std::endl;
}

unsigned int	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP "
		<< this->_name
		<< " attacks "
		<< target
		<< " at range, causing "
		<< this->_range_attack_dmg
		<< std::endl;
	return this->_range_attack_dmg;
}

unsigned int	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP "
		<< this->_name
		<< " attacks "
		<< target
		<< " with a melee, causing "
		<< this->_melee_attack_dmg
		<< std::endl;
	return this->_melee_attack_dmg;
}

// void	FragTrap::takeDamage(unsigned int amount)
// {
// 	if (amount - this->_armor_reduction > this->_hitp)
// 		this->_hitp = 0;
// 	else if (amount > 0)
// 		this->_hitp -= (amount - this->_armor_reduction);
// 	else
// 		std::cout << "Negatif damage" << std::endl;
// }

// void	FragTrap::beRepaired(unsigned int amount)
// {
// 	if (amount > this->_mhitp)
// 		this->_hitp = 100;
// 	else
// 		this->_hitp += amount;
// }

unsigned int	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	PTR		ptrs[2] = { &FragTrap::meleeAttack, &FragTrap::rangedAttack};
	int		r;
	int 	total;

	total = 0;
	if (this->_energyp < 25)
		std::cout << this->_name << " is out of energy" << std::endl;
	else
	{
		for(int i = 0; i < 5; i++)
		{
			r = rand() % 2;
			total += (this->*ptrs[r])(target);
		}
		this->_energyp -= 25;
	}
	return total;
}

std::string	FragTrap::getName() const{
	return this->_name;
}
