#ifndef CONVERTER_H
# define CONVERTER_H

#include <iostream>
#include <string>
#include <sstream>

class Converter
{
private:
	std::string	const	_str;
	int					type;
	double				val;

public:
	Converter(std::string const & str);
	Converter();
	~Converter();

	char		getChar() const;
	int			getInt() const;
	float		getFloat() const;
	double		getDouble() const;
};

#endif