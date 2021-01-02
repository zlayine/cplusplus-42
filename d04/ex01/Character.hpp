#ifndef CHARACTER_H
# define CHARACTER_H

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string		_name;
	int				_ap;
	AWeapon			*_weapon;

public:
	Character();
	Character(Character const &src);
	Character(std::string const & name);
	~Character();

    Character &    operator=(Character const & rhs);
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string getName() const;
	int	getAP() const;
	AWeapon	*getWeapon() const;
};

std::ostream &  operator<<(std::ostream & o, Character const & src);

#endif