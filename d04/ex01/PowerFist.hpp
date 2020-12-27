#ifndef POWERFIST_H
# define POWERFIST_H

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist();
	virtual	~PowerFist();

	virtual	void	attack() const;
};

#endif