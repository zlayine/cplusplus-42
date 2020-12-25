#include <iostream>
#include <string>
#include "Human.cpp"

//must be redone ?
int main(void)
{
	Human bob;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
}
