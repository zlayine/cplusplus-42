#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string	const	_target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string const &target);
	~PresidentialPardonForm();

	bool			isSigned() const;

	virtual void	execute(Bureaucrat const &exec) const;
};

#endif