#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <exception>
class Bureaucrat;
#include "Form.hpp"

class Bureaucrat
{
private:
	std::string	const	_name;
	int					_grade;

public:
	Bureaucrat();
	Bureaucrat(std::string const & name, int grade);
	~Bureaucrat();

	std::string		getName() const;
	int				getGrade() const;
	void			incrementGrade();
	void			decrementGrade();

	void			signForm(Form &form) const;
	void			executeForm(Form const &form) const;

	class GradeTooHighException : public std::exception
	{
		virtual const char * what () const throw();
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char * what () const throw();
	};

};

std::ostream &  operator<<(std::ostream & o, Bureaucrat const & src);


#endif