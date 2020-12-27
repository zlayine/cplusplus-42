#ifndef ENEMY_H
# define ENEMY_H

#include <iostream>
#include <string>

class Enemy
{
protected:
	int			_hp;
	std::string	_type;
public:
	Enemy();
	Enemy(int hp, std::string const & type);
	virtual	~Enemy();
	
	std::string		getType() const;
	int				getHP() const;

	virtual void	takeDamage(int) = 0;

};

#endif