#include "Enemy.hpp"

Enemy::Enemy()
{
}

Enemy::Enemy(Enemy const & src)
{
	*this = src;
}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type)
{
}

Enemy::~Enemy()
{
}

Enemy	&Enemy::operator=(Enemy const & rhs)
{
	this->_type = rhs.getType();
	this->_hp = rhs.getHP();
	return *this;
}

std::string		Enemy::getType() const
{
	return this->_type;
}

int				Enemy::getHP() const
{
	return this->_hp;
}

void		Enemy::takeDamage(int dmg)
{
	if (dmg > 0)
		this->_hp -= dmg;
	if (this->_hp < 0)
		this->_hp = 0;
}