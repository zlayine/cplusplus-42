#include "span.hpp"
#include <iostream>

// missing exceptions
int main()
{
	Span sp = Span(5);

	// sp.addNumber(5);
	// sp.addNumber(3);
	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(11);
	for(int i = 0; i < 1000; i++)
	{
		srand(clock());
		sp.addNumber(rand() % 100);
	}

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}