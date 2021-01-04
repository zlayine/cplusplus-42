#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>

Base	*generate()
{
	srand(clock());
	int r = rand() % 3;
	if (r == 0)
		return (new A());
	else if (r == 1)
		return (new B());
	else
		return (new C());
}

void	identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify_from_reference(Base & p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "C" << std::endl;
}

int main()
{
	Base *a = generate();
	Base *b = generate();
	Base *c = generate();

	identify_from_pointer(a);
	identify_from_reference(*b);
	identify_from_reference(*c);
	return (0);
}