#ifndef HUMAN_H
# define HUMAN_H
#include "Brain.hpp"

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

#endif