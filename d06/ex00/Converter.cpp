#include "Converter.hpp"

Converter::Converter()
{
}

#define DOUBLE 2
#define FLOAT 3
#define INT 1
#define ERROR 0

Converter::Converter(std::string str)
{
	_sign = 0;
	int p;
	int i;

	p = 0;
	i = 0;
	
	if (str.length() == 1 && !std::isdigit(str[i]))
	{
		_val = str[i];
		return ;
	}
	if (str[i] == '-' && i++)
		_sign = 1;
	if (str[i] == '+' && i++)
		_sign = 0;
	if (str == "inff" || str == "-inff" || str == "+inff" || str == "nanf" || 
		str == "inf" || str == "-inf" || str == "+inf" || str == "nan")
	{
		_error = 1;
		_val = std::atof(str.c_str());
		return ;
	}
	while(str[i])
	{
		if (str[i] == '.')
			p = 1;
		else if (p && std::isdigit(str[i]))
		{
			if (p == 1 && str[i] != '0')
				p++;
		}
		else if ((!std::isdigit(str[i]) && str[i] != 'f') || (str[i] == 'f' && !p))
		{
			_error = 2;
			break ;
		}
		i++;
	}
	p--;
	_precision = p;
	_val = std::atof(str.c_str());
}

Converter::~Converter()
{
}

void		Converter::getChar() const
{
	char c;

	std::cout << "char: ";
	try
	{
		if (_error || _val < 0 || _val >= 128)
			throw Converter::ImpossibleConvertException();
		c = static_cast<char>(_val);
		if (!isprint(c))
			throw Converter::NonDisplayableException();
		else
			std::cout << "'" << c << "'" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void			Converter::getInt() const
{
	int v;

	std::cout << "int: ";
	try
	{
		if (_error || _val > std::numeric_limits<int>::max()
		|| _val < std::numeric_limits<int>::min())
			throw Converter::ImpossibleConvertException();
		v = static_cast<int>(_val);
		std::cout << v << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void		Converter::getFloat() const
{
	std::stringstream ss;
	float f;

	std::cout << "float: ";
	try {
		f = static_cast<float>(_val);
		if (_sign)
			ss << "-";
		ss << f;
		if (_error == 2 || ((_val > std::numeric_limits<int>::max()
		|| _val < std::numeric_limits<int>::min()) && ss.str() != "nan" && ss.str().find("inf") == std::string::npos))
			throw Converter::ImpossibleConvertException();
		if (_precision < 1 && ss.str().find('.') == std::string::npos && ss.str() != "nan" && ss.str().find("inf") == std::string::npos)
			ss << ".0";
		std::cout << ss.str() << "f" << std::endl;
		ss.clear();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void		Converter::getDouble() const
{
	std::stringstream ss;
	double d;

	std::cout << "double: ";
	try
	{
		d = static_cast<double>(_val);
		if (_sign)
			ss << "-";
		ss << d;
		if (_error == 2 || ((_val > std::numeric_limits<int>::max()
		|| _val < std::numeric_limits<int>::min()) && ss.str() != "nan" && ss.str().find("inf") == std::string::npos))
			throw Converter::ImpossibleConvertException();
		if (_precision < 1 && ss.str().find('.') == std::string::npos && ss.str() != "nan" && ss.str().find("inf") == std::string::npos)
			ss << ".0";
		std::cout << ss.str() << std::endl;
		ss.clear();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

const char *Converter::ImpossibleConvertException::what() const throw()
{
	return "impossible";
}

const char *Converter::NonDisplayableException::what() const throw()
{
	return "Non displayable";
}
