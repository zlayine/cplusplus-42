#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

void	ft_replace(std::string &word, std::string target, std::string replacement){
	size_t	start_pos;

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

std::string	to_upper(std::string str)
{
	size_t i;

	i = 0;
	for(i = 0; i < str.length(); ++i) {
		str[i] = toupper(str[i]);
	}
	return (str);
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
	ss << to_upper(argv[1]) << ".replace";
	ofs.open(ss.str());
	while (std::getline(ifs, buff))
	{
		ft_replace(buff, argv[2], argv[3]);
		if (!ifs.eof())
			ofs << buff << std::endl;
		else
			ofs << buff;
	}
	ifs.close();
	ofs.close();
	return (0);
}