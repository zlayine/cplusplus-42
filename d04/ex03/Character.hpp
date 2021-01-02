#ifndef CHARACTER_H
# define CHARACTER_H

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string	_name;
	int			_total;
	AMateria	*_materias[4];
public:
	Character();
	Character(Character const &src);
	Character(std::string name);
	~Character();

	Character&	operator=(Character const &rhs);
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

	std::string const & getName() const;

};

#endif