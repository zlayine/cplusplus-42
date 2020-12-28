#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try
	{
		Bureaucrat ash = Bureaucrat("Ash", 140);
		PresidentialPardonForm	presForm = PresidentialPardonForm("Company");
		ShrubberyCreationForm	shruForm = ShrubberyCreationForm("Home");
		RobotomyRequestForm		roboForm = RobotomyRequestForm("Store");
		
		ash.signForm(presForm);

	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat ash = Bureaucrat("Ash", 140);
		Bureaucrat mandel = Bureaucrat("Mandel", 5);
		PresidentialPardonForm	presForm = PresidentialPardonForm("Company");
		ShrubberyCreationForm	shruForm = ShrubberyCreationForm("Home");
		RobotomyRequestForm		roboForm = RobotomyRequestForm("Store");
		
		ash.signForm(shruForm);
		std::cout << shruForm << std::endl;
		ash.executeForm(shruForm);
		std::cout << shruForm << std::endl;
		
		mandel.signForm(roboForm);
		mandel.executeForm(roboForm);

		mandel.executeForm(presForm);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}