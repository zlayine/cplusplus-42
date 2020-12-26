#ifndef WEAPON_H
# define WEAPON_H

class Weapon
{
private:
	std::string _type;
public:
	Weapon(std::string type);
	~Weapon();

	void	setType(std::string type);

	std::string	getType(void);
};

#endif
