#ifndef EASYFIND_H
# define EASYFIND_H

#include <list>

template<typename T>
int		easyfind(T const & array, int find)
{
	std::list<int>::const_iterator it;
	std::list<int>::const_iterator ite = array.end();

	for(it = array.begin(); it != ite; ++it)
	{
		if (*it == find)
			return *it;
	}
	return 0;
}

#endif