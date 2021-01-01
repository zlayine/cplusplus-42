#include "AWeapon.hpp"

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(AWeapon const & src)
{
	*this = src;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::~AWeapon()
{
}

AWeapon	&AWeapon::operator=(AWeapon const & rhs)
{
	this->_name = rhs.getName();
	this->_damage = rhs.getDamage();
	this->_apcost = rhs.getAPCost();
	return *this;
}

std::string		AWeapon::getName() const {
	return this->_name;
}

int			AWeapon::getAPCost() const {
	return this->_apcost;
}

int			AWeapon::getDamage() const {
	return this->_damage;
}
