#ifndef EASYFIND_H
# define EASYFIND_H

# include <map>
# include <algorithm>

struct NotFoundException : public std::exception
{
	const char * what () const throw ()
    {
    	return "Value not found exception";
    }
};

template<typename T>
typename T::iterator	easyfind(T &cont, int val)
{	
	typename T::iterator result = std::find(cont.begin(), cont.end(), val);
	if (result == cont.end())
		throw NotFoundException();
	return result;
}

template<typename key, typename value>
typename std::map<key, value>::iterator	easyfind(std::map<key, value> &cont, int val)
{	
	for (typename std::map<key, value>::iterator it = cont.begin(); it != cont.end(); ++it)
	{
		if (it->second == val)
			return it;
		if (it == cont.end())
			throw NotFoundException();
	}
	throw NotFoundException();
}

template<typename key, typename value>
typename std::multimap<key, value>::iterator	easyfind(std::multimap<key, value> &cont, int val)
{	
	for (typename std::multimap<key, value>::iterator it = cont.begin(); it != cont.end(); ++it)
	{
		if (it->second == val)
			return it;
		if (it == cont.end())
			throw NotFoundException();
	}
	throw NotFoundException();
}

#endif