#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	virtual	~PlasmaRifle();

	virtual	void	attack() const;
};

#endif