#include "easyfind.hpp"
#include <iostream>

//check when not found in the real find
int main()
{
	std::list<int> t;

	t.push_front(1);
	t.push_front(2);
	t.push_front(3);
	int r = easyfind<std::list<int> >(t, 2);
	std::cout << r << std::endl;
	return 0;
}
