#include "span.hpp"

Span::Span()
{

}

Span::Span(Span const &src) : _size(src._size), _list(src._list)
{
}

Span::Span(unsigned int n)
{
	_size = n;
}

Span::~Span()
{
	
}

Span&	Span::operator=(Span const &src)
{
	_list.clear();
	_list = src._list;
	_size = src._size;
	return *this;
}

const char *Span::SizeExceedLimitsException::what() const throw()
{
	return "Size exceed the limits exception..";
}

const char *Span::SmallSizeException::what() const throw()
{
	return "Small size exception..";
}

void	Span::addNumber(int nbr)
{
	if (_list.size() < _size)
		_list.push_back(nbr);
	else
		throw Span::SizeExceedLimitsException();
}

int		Span::shortestSpan() const
{
	int small;
	int	after;
	std::vector<int>::const_iterator it;
	std::vector<int>::const_iterator ite = _list.end();

	if (_list.size() < 2)
		throw Span::SmallSizeException();
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
		throw Span::SmallSizeException();
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
