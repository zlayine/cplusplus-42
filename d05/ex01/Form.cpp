#include "Form.hpp"

Form::Form()
{
}

Form::Form(Form const &src)
{
	*this = src;
}

Form::Form(std::string const name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade), _signed(false)
{
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
}

Form&		Form::operator=(Form const &rhs)
{
	_name = rhs.getName();
	_signed = rhs.isSigned();
	_signGrade = rhs.getSignGrade();
	_execGrade = rhs.getExecGrade();
	return *this;
}

std::string		Form::getName() const
{
	return _name;
}

int				Form::getSignGrade() const
{
	return _signGrade;
}

int				Form::getExecGrade() const
{
	return _execGrade;
}

bool			Form::isSigned() const
{
	return _signed;
}

void			Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _signGrade)
		throw Form::GradeTooLowException();
	else if (_signed)
		throw Form::FormAlreadySigned();
	else
		_signed = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade too high..";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade too low..";
}

const char *Form::FormAlreadySigned::what() const throw()
{
	return "Form already signed";
}

std::ostream &  operator<<(std::ostream & o, Form const & src)
{	
	o << src.getName() << ", form is ";
	if (src.isSigned())
		o << "signed.";
	else
		o << "not signed yet.";
	return o;
}
