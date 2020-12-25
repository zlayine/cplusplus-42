#include "Human.hpp"

Human::Human()
{
	Brain brain = Brain();
	_brain = brain;
	_brain.setAddress();
}

Human::~Human()
{
}

Brain	Human::getBrain(void)
{
	return this->_brain;
}

std::string	Human::identify(void)
{
	return this->_brain.identify();
}