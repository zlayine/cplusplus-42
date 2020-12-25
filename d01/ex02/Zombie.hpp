#include <string>

class Zombie {

private:
	
	Zombie	*_self;

public:

	std::string	name;
	std::string	type;

	Zombie(std::string name, std::string type);
	~Zombie();

	void	announce();
};

