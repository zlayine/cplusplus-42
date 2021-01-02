#ifndef FORM_H
#define FORM_H

class Form;
#include "Bureaucrat.hpp"

class Form
{
protected:
	std::string 		_name;
	int					_signGrade;
	int					_execGrade;
	bool				_signed;
	
public:
	Form();
	Form(Form const &src);
	Form(std::string const name, int signGrade, int execGrade);
	~Form();

	Form&			operator=(Form const &rhs);
	std::string		getName() const;
	int				getSignGrade() const;
	int				getExecGrade() const;
	bool			isSigned() const;

	void			beSigned(Bureaucrat const &bureaucrat);	
	virtual void	execute(Bureaucrat const & exec) const = 0;

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

	class FormUnsigned : public std::exception
	{
		virtual const char * what () const throw();
	};
};

std::ostream &  operator<<(std::ostream & o, Form const & src);

#endif