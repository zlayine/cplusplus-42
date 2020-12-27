#include "Squad.hpp"


Squad::Squad()
{
	_cap = 10;
	_current = 0;
	_marines = new ISpaceMarine*[_cap];
}

Squad::Squad(Squad const & src)
{
	this->_cap = src.getCap();
	this->_current = src.getCount();
	setMarines(src.getUnits());
}

Squad::~Squad()
{
	for (int i = 0; i < _current; i++)
	{
		delete _marines[i];
	}
	delete[] _marines;
}

Squad & Squad::operator=(Squad const & src)
{
	for (int i = 0; i < _current; i++)
		delete _marines[i];
	delete[] _marines;
	this->_cap = src.getCap();
	this->_current = src.getCount();
	setMarines(src.getUnits());
    return *this;
}

int			Squad::getCap() const
{
	return _cap;
}

ISpaceMarine	**Squad::getUnits() const
{
	return _marines;
}

void			Squad::setMarines(ISpaceMarine **units)
{
	_marines = new ISpaceMarine*[_cap];
	for(int i = 0; i < _current; i++)
		_marines[i] = units[i];
}

void		Squad::expand()
{
	_cap *= 2;

	ISpaceMarine **tmp = new ISpaceMarine*[_cap];
	for(int i = 0; i < _current; i++)
	{
		tmp[i] = _marines[i];
	}
	delete[] _marines;

	_marines = tmp;
}

ISpaceMarine*	Squad::getUnit(int n) const
{
	if (n < 0 || n >= _current)
		return NULL;
	else
		return _marines[n];
}

int			Squad::getCount() const
{
	return _current;
}

int			Squad::push(ISpaceMarine* unit)
{
	if (!unit)
		return _current;
	if (_current >= _cap)
		expand();
	_marines[_current++] = unit;
	return _current;
}
