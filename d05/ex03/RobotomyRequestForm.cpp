#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("roboto request", 72, 45) , _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
{
	*this = src;
}


RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm&		RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	_target = rhs._target;
	_signed = rhs.isSigned();
	return *this;
}


void		RobotomyRequestForm::execute(Bureaucrat const &exec) const
{
	if (!Form::isSigned())
		throw Form::FormUnsigned();
	else if (exec.getGrade() > 137)
		throw Form::GradeTooLowException();
	else
	{
		std::cout << "* Drrrrrrrrrrrrr.. *" << std::endl;
		if (rand() % 2 == 0)
			std::cout << _target << " has been robotomized successfully" << std::endl;
		else
			std::cout <<"robotomization failed" << std::endl;
	}
}
