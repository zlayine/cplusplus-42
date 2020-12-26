#include <iostream>
#include <string>

std::string	to_upper(std::string str)
{
	size_t i;

	i = 0;
	for(i = 0; i < str.length(); ++i) {
		str[i] = toupper(str[i]);
	}
	return (str);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[++i])
			std::cout << to_upper(std::string(argv[i])) << " ";
		std::cout << std::endl;
	}
	return (0);
}
