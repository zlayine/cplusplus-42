#include "Data.hpp"

int main()
{
	void *v;

	v = serialize();
	Data *d = deserialize(v);
	std::cout << d->s1 << std::endl;
	std::cout << d->s2 << std::endl;
	std::cout << d->n << std::endl;
	delete d;
	return (0);
}