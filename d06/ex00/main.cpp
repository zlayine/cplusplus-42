#include "Converter.hpp"
#include <iostream>
#include <string>
# include <cmath>
# include <iomanip>
int		main(int argc, char **argv)
{

	// long double tmp = std::atof("inf");
	// float f = static_cast<float>(tmp);
	// std::cout << f << std::endl;
	Converter c = Converter(std::string(argv[1]));
	c.getChar();
	c.getInt();
	c.getFloat();
	c.getDouble();

	return 0;
}