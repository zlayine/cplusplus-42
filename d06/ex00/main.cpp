#include "Converter.hpp"
#include <iostream>
#include <string>
# include <cmath>
# include <iomanip>
int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Arguments invalid.." << std::endl;
	}
	else
	{
		Converter c = Converter(std::string(argv[1]));
		c.getChar();
		c.getInt();
		c.getFloat();
		c.getDouble();
	}
	return 0;
}