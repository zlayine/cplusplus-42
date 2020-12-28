#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b1 = Bureaucrat("Mandel", 0);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat b2 = Bureaucrat("Ash", 149);
		b2.decrementGrade();
		std::cout << b2 << std::endl;
		b2.decrementGrade();
		std::cout << b2 << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat b3 = Bureaucrat("Stephen", 2);
		b3.incrementGrade();
		std::cout << b3 << std::endl;
		b3.incrementGrade();
		std::cout << b3 << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}