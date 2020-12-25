#ifndef ZOMBIE_EVENT_H
# define ZOMBIE_EVENT_H

class ZombieEvent {

private:
	std::string	_type;

public:

	ZombieEvent();
	~ZombieEvent();

	void	setZombieType(std::string type);

	Zombie	*newZombie(std::string name);

	Zombie	*randomChump(void);
};

#endif
