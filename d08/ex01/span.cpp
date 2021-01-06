#include "span.hpp"

Span::Span()
{

}

Span::Span(unsigned int n)
{
	_size = n;
}

Span::~Span()
{
	
}

void	Span::addNumber(int nbr)
{
	if (_list.size() < _size)
	{
		_list.push_back(nbr);
	}
	else
	{
		//throw exception
	}
}

int		Span::shortestSpan() const
{
	int small;
	int	after;
	std::vector<int>::const_iterator it;
	std::vector<int>::const_iterator ite = _list.end();

	if (_list.size() < 2)
	{
		// throw 
	}
	small = _list[0];
	after = _list[0];
	for(it = _list.begin(); it != ite; ++it)
	{
		if (*it < small)
			small = *it;
		else if (*it < after && *it > small)
			after = *it;
	}
	return (after - small);
}

int		Span::longestSpan() const
{
	int small;
	int	after;
	std::vector<int>::const_iterator it;
	std::vector<int>::const_iterator ite = _list.end();

	if (_list.size() < 2)
	{
		// throw 
	}
	small = _list[0];
	after = _list[0];
	for(it = _list.begin(); it != ite; ++it)
	{
		if (*it < small)
			small = *it;
		else if (*it > after)
			after = *it;
	}
	return (after - small);
}
