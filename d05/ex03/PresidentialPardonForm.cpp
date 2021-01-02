#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("presidential pardon", 25, 5) , _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src)
{
	*this = src;
}


PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm&		PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	_target = rhs._target;
	_signed = rhs.isSigned();
	return *this;
}


void		PresidentialPardonForm::execute(Bureaucrat const &exec) const
{
	if (!Form::isSigned())
		throw Form::FormUnsigned();
	else if (exec.getGrade() > 137)
		throw Form::GradeTooLowException();
	else
		std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
