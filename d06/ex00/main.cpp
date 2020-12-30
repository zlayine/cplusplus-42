#include "Converter.hpp"
#include <iostream>
#include <string>

int		main(int argc, char **argv)
{
    char* arr = (char*)"97";

    void* ptr = static_cast<void*>(arr);
	std::cout << static_cast<int>(*ptr) << std::endl;
	return 0;
}