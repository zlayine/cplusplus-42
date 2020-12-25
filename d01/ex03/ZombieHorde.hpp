
class ZombieHorde
{
private:
	std::list<Zombie*> _zombies;
	std::list<Zombie*>::iterator it;

public:
	ZombieHorde(int n);
	~ZombieHorde();

	void	announce(void);
};

