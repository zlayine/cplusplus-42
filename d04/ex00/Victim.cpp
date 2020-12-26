#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

std::string		Victim::getName() const {
	return this->_name;
}

void			Victim::getPolymorphed() const {
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &  operator<<(std::ostream & o, Victim const & src)
{
	o << "I am " << src.getName() << ", and I like otters!" << std::endl;
	return o;
}