#include <iostream>
#include "Array.hpp"

int main()
{
	Array<int> array1;
	Array<int> array2(5);

	std::cout << "Array1:\n";
	for (size_t i = 0; i < array1.size(); i++)
	{
		array1[i] = i;
		std::cout << array1[i] << " ";
	}
	std::cout << std::endl << "Array2:\n";
	for (size_t i = 0; i < array1.size(); i++)
	{
		array1[i] = i;
		std::cout << array1[i] << " ";
	}
	std::cout << std::endl;

	try
	{
		array2[-1] = 2;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		array2[999] = 2;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}