#include <string>
#include "Brain.cpp"

class Human
{
private:
	Brain _brain;

public:
	Human();
	
	~Human();

	Brain	getBrain(void);

	std::string	identify(void);
};
