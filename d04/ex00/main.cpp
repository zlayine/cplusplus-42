#include "Sorcerer.hpp"
#include "Peon.hpp"

//coplien form not added
int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);
	return 0;
}