#ifndef SPAN_H
# define SPAN_H

#include <list>
#include <vector>

class Span {

private:
	std::vector<int> _list;
	unsigned int	_size;
public:
	Span();
	Span(unsigned int n);
	~Span();

	void	addNumber(int nbr);
	int		shortestSpan() const;
	int		longestSpan() const;

	class SizeExceedLimitsException : public std::exception
	{
		virtual const char * what () const throw();
	};

	class SmallSizeException : public std::exception
	{
		virtual const char * what () const throw();
	};
};

#endif