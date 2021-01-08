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
	Enemy(Enemy const &src);
	Enemy(int hp, std::string const & type);
	virtual	~Enemy();
	
    Enemy &    operator=(Enemy const & rhs);
	std::string		getType() const;
	int				getHP() const;

	virtual void	takeDamage(int);

};

#endif