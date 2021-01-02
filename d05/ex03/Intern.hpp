#ifndef INTERN_H
# define INTERN_H

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:
	Intern();
	Intern(Intern const &src);
	~Intern();

	Intern&		operator=(Intern const &rhs);
	Form		*makeForm(std::string const & type, std::string const & target);
};

typedef Form	*(Form::*PTR) (std::string const &target);

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

}


Form	*Intern::makeForm(std::string const & type, std::string const & target)
{
	std::string names[] = {"robotomy request", "presidential pardon", "shrubbery creation"};

	PTR 	ptrs[3] = {ShrubberyCreationForm::generate, &ShrubberyCreationForm::generate, &ShrubberyCreationForm::generate};

    // for(int i = 0; i < 3; i++)
    // {
    //     if (forms[i]->getName().compare(type) == 0)
    //     {  
	// 		forms[i]->
    //         break ;
    //     }
    // }
}


#endif