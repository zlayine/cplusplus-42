#include <iostream>
class HumanA
{

private:
	Weapon	&_weapon;
	std::string	_name;
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	void	attack();
};


