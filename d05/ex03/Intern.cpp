#include "Intern.hpp"

Intern::Intern()
{
	
}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern::~Intern()
{
}

Intern&			Intern::operator=(Intern const &rhs)
{
	return *this;
}

Form* generateShrubberyForm(std::string const& target) {
	return new ShrubberyCreationForm(target);
}

Form* generatePresidentialForm(std::string const& target) {
	return new PresidentialPardonForm(target);
}

Form* generateRobotomyForm(std::string const& target) {
	return new RobotomyRequestForm(target);
}


Form	*Intern::makeForm(std::string const & type, std::string const & target)
{
	std::string names[] = {"shrubbery creation", "presidential pardon", "robotomy request"};

	PTR 	ptrs[3] = { generateShrubberyForm, generatePresidentialForm, generateRobotomyForm};

    for(int i = 0; i < 3; i++)
    {
        if (names[i].compare(type) == 0)
        {  
			std::cout << "Intern creates " << type << "." << std::endl;
			ptrs[i](target);
            break ;
        }
    }
}
