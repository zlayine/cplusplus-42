#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &src);
	virtual	~PlasmaRifle();

    PlasmaRifle &    operator=(PlasmaRifle const & rhs);
	virtual	void	attack() const;
};

#endif