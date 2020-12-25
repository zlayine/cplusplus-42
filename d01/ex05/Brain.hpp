#include <string>
#include <iostream>

class Brain
{

private:
	std::string	_addressStr;

public:
	Brain(void);
	
	~Brain(void);

	void	setAddress(void);

	std::string	identify(void);

};

