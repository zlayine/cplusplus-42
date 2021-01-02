#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string			_target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const &src);
	RobotomyRequestForm(std::string const &target);
	~RobotomyRequestForm();

	RobotomyRequestForm&			operator=(RobotomyRequestForm const &rhs);
	bool			isSigned() const;

	virtual void	execute(Bureaucrat const &exec) const;
};

#endif