#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>

void	replace(std::string &word, std::string target, std::string replacement){
	int	start_pos;

	start_pos = 0;
	while (start_pos < word.length())
	{
		if (word.find(target, start_pos) != std::string::npos)
		{
			word.replace(start_pos, target.length(), replacement);
			start_pos += replacement.length();
		}
		else
			start_pos++;
	}
}

int main(int argc, char **argv)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		buff;
	std::stringstream ss;

	if (argc != 4)
	{
		std::cout << "Parameters of the program are not right" << std::endl;
		return (1);
	}
	ifs.open(argv[1]);
	ss << argv[1] << ".replace";
	ofs.open(ss.str());
	while (std::getline(ifs, buff))
	{
		replace(buff, argv[2], argv[3]);
		std::cout << buff << "\n";
		ofs << buff << std::endl;
	}
	ifs.close();
	ofs.close();
	return (0);
}