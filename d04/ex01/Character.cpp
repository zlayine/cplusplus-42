#include "Character.hpp"


Character::Character(std::string const & name) : _name(name)
{
	this->_ap = 40;
	this->_weapon = NULL;
}

void	Character::recoverAP()
{
	if (this->_ap < 40)
		this->_ap += 10;
}

void	Character::equip(AWeapon *wp)
{
	this->_weapon = wp;
}

void	Character::attack(Enemy *enemy)
{
	if (this->_ap !=  0 && this->_weapon)
	{
		std::cout << this->_name << " attacks " << enemy->getType()
			<< " with a " << this->_weapon->getName() << std::endl;
		this->_weapon->attack();
		enemy->takeDamage(this->_weapon->getDamage());
		if (enemy->getHP() <= 0)
			delete enemy;
		this->_ap -= this->_weapon->getAPCost();
	}
}

std::string Character::getName() const 
{
	return this->_name;
}

int		Character::getAP() const
{
	return this->_ap;
}

AWeapon	*Character::getWeapon() const
{
	return this->_weapon;
}

std::ostream &  operator<<(std::ostream & o, Character const & src)
{	
	o << src.getName() << " has " << src.getAP();
	if (src.getWeapon())
		o << " AP and wields a " << src.getWeapon()->getName() << std::endl;
	else
		o << " AP and is unarmed" << std::endl;
	return o;
}
