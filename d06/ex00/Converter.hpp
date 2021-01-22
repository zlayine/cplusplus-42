#ifndef CONVERTER_H
# define CONVERTER_H

#include <iostream>
#include <string>
#include <sstream>

class Converter
{
private:
	double				_val;
	int					_precision;
	int					_error;
	int					_sign;

public:
	Converter(std::string);
	Converter();
	Converter(Converter const& src);
	~Converter();

	void		getChar() const;
	void		getInt() const;
	void		getFloat() const;
	void		getDouble() const;

	class ImpossibleConvertException : public std::exception
	{
		virtual const char * what () const throw();
	};

	class NonDisplayableException : public std::exception
	{
		virtual const char * what () const throw();
	};
};

#endif