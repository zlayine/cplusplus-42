#include "Bureaucrat.hpp"

int main()
{

	try
	{
		Bureaucrat b1 = Bureaucrat("Ash", 149);
		Bureaucrat b2 = Bureaucrat("Mandel", 5);
		Form	form = Form("myForm", 20, 20);
		b1.signForm(form);
		std::cout << form << std::endl;
		b2.signForm(form);
		std::cout << form << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}