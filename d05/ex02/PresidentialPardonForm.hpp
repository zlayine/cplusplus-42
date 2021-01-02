#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string			_target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const &src);
	PresidentialPardonForm(std::string const &target);
	~PresidentialPardonForm();

	PresidentialPardonForm&			operator=(PresidentialPardonForm const &rhs);
	bool			isSigned() const;

	virtual void	execute(Bureaucrat const &exec) const;
};

#endif