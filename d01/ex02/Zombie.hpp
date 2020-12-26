#ifndef ZOMBIE_H
# define ZOMBIE_H

class Zombie {

public:

	std::string	name;
	std::string	type;

	Zombie(std::string name, std::string type);
	~Zombie();

	void	announce();
};

#endif
