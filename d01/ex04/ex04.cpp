#include <iostream>
#include <string>

int		main(void)
{
	std::string s;
	std::string	*sPtr;
	std::string &sRef = s;
	
	s = "Hi this is brain";
	sPtr = &s;

	std::cout << "Str pointer: " << *sPtr << std::endl << "Str reference: " << sRef << std::endl;
	return (0);
}

