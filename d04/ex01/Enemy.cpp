#include "Enemy.hpp"

Enemy::Enemy()
{
}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type)
{
}

Enemy::~Enemy()
{
}

std::string		Enemy::getType() const
{
	return this->_type;
}

int				Enemy::getHP() const
{
	return this->_hp;
}
