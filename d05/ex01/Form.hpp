#ifndef FORM_H
#define FORM_H

class Form;
#include "Bureaucrat.hpp"

class Form
{
private:
	std::string const	_name;
	int					_signGrade;
	int					_execGrade;
	bool				_signed;
public:
	Form();
	Form(std::string const name, int signGrade, int execGrade);
	~Form();

	std::string		getName() const;
	int				getSignGrade() const;
	int				getExecGrade() const;
	bool			isSigned() const;

	void	beSigned(Bureaucrat &bureaucrat);	

	class GradeTooHighException : public std::exception
	{
		virtual const char * what () const throw();
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char * what () const throw();
	};

	class FormAlreadySigned : public std::exception
	{
		virtual const char * what () const throw();
	};
};

std::ostream &  operator<<(std::ostream & o, Form const & src);

#endif