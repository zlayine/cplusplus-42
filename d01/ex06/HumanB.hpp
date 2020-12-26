#ifndef HUMANB_H
# define HUMANB_H

class HumanB
{

private:
	Weapon	*_weapon;
	std::string	_name;
public:

	HumanB(std::string name);
	~HumanB();

	void	setWeapon(Weapon& weapon);

	void	attack();
};

#endif
