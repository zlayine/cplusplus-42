#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"
#include <fstream>
#include <sstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string	const	_target;
	static std::string	const	_trees[3];

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string const &target);
	~ShrubberyCreationForm();

	bool			isSigned() const;

	virtual void	execute(Bureaucrat const &exec) const;
};

#endif