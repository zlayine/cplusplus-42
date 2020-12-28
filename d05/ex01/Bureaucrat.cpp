#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}


Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw	Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw	Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high exception..";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low exception..";
}

std::string		Bureaucrat::getName() const
{
	return _name;
}

int				Bureaucrat::getGrade() const
{
	return _grade;
}

void			Bureaucrat::incrementGrade()
{
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
}

void			Bureaucrat::decrementGrade()
{
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
}

void			Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signs " << form.getName();
	}
	catch(std::exception &e)
	{
		std::cout << _name << " cannot sign " << form.getName() << " because " << e.what();
	}
}


std::ostream &  operator<<(std::ostream & o, Bureaucrat const & src)
{	
	o << src.getName() << ", bureaucrat grade " << src.getGrade() << ".";
	return o;
}