#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("PresidentialPardonForm", 25, 5) , _target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
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
