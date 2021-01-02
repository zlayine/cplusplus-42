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

typedef Form	*(*PTR) (std::string const &target);

#endif