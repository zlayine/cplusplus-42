#include <sstream>
#include <string>
#include "Brain.hpp"

Brain::Brain()
{
}

Brain::~Brain()
{
}

void	Brain::setAddress()
{
	std::stringstream ss;

	ss << std::hex << "0x" << this;
	this->_addressStr = ss.str();
}

std::string	Brain::identify()
{
	return this->_addressStr;
}