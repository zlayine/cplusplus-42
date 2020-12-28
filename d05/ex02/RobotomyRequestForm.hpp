#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string	const	_target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string const &target);
	~RobotomyRequestForm();

	bool			isSigned() const;

	virtual void	execute(Bureaucrat const &exec) const;
};

#endif