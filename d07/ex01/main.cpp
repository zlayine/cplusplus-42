#include "iter.hpp"

void	test(int a)
{
	std::cout << a + 1 << std::endl;
}

int main()
{
	int array[] = {1, 2, 3, 4};

	::iter(array, 4, test);

	return (0);
}