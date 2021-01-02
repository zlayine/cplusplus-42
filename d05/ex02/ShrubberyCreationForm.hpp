#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"
#include <fstream>
#include <sstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string					_target;
	static std::string	const	_trees[3];

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	ShrubberyCreationForm(std::string const &target);
	~ShrubberyCreationForm();

	ShrubberyCreationForm&			operator=(ShrubberyCreationForm const &rhs);
	bool			isSigned() const;

	virtual void	execute(Bureaucrat const &exec) const;
};

#endif