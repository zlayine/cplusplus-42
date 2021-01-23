#include "iter.hpp"

void	add_one(int a)
{
	std::cout << a + 1 << std::endl;
}

int main()
{
	int array[] = {1, 2, 3, 4};

	::iter(array, 4, add_one);

	return (0);
}