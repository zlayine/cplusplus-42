#include "span.hpp"
#include <iostream>

int main()
{
	try {
		Span sp = Span(5);
		for(int i = 0; i < 1000; i++)
		{
			srand(clock());
			sp.addNumber(rand() % 100);
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Span sp = Span(1000);
		for(int i = 0; i < 1000; i++)
		{
			srand(clock());
			sp.addNumber(rand() % 100);
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Span sp = Span(2);
		sp.addNumber(5);
		sp.addNumber(2);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}