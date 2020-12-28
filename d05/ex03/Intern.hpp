#ifndef INTERN_H
# define INTERN_H

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
public:
	Intern();
	~Intern();

	Form	*makeForm(std::string const & type, std::string const & target);
};


// typedef Form* (Form::*PTRS) (std::string const &);

Intern::Intern()
{
}

Intern::~Intern()
{
}

Form	*Intern::makeForm(std::string const & type, std::string const & target)
{
	std::string names[] = {"robotomy request", "presidential pardon", "shrubbery creation"};

	// PTRS		ptrs[3] = { new PresidentialPardonForm, new RobotomyRequestForm, new ShrubberyCreationForm};

    // for(int i = 0; i < 3; i++)
    // {
    //     if (names[i].compare(type) == 0)
    //     {  
    //     	(*ptrs[i])(target);
    //         break ;
    //     }
    // }
}


#endif