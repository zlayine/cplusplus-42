#ifndef BRAIN_H
# define BRAIN_H

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

#endif