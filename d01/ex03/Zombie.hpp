#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie {

private:
	std::string	_name;
	std::string	_type;

	std::string	randomName();

public:

	Zombie();
	Zombie(std::string name, std::string type);
	~Zombie();

	void	announce();
};

#endif
