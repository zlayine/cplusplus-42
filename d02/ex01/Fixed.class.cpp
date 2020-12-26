#include "Fixed.class.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_isfloat = 0;
    this->_fpnt = 0;
}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::Fixed(int const val)
{
    std::cout << "Int constructor called" << std::endl;
    this->_isfloat = 0;
    this->_fpnt = val * (1 << this->_fbits);
}

Fixed::Fixed(float const val)
{
    std::cout << "Float constructor called" << std::endl;
    this->_isfloat = 1;
    this->_fpnt = roundf(val * (1 << this->_fbits));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Assignation operator called" << std::endl;

    this->setFixedPoint(rhs.getFixedPoint());
    this->_isfloat = rhs.isFloat();
    return *this;
}

std::ostream &  operator<<(std::ostream & o, Fixed const & rhs)
{
    if (!rhs.isFloat())
        o << rhs.getRawBits();
    else
        o << rhs.toFloat();
    return o;
}

bool    Fixed::isFloat() const
{
    if (this->_isfloat)
        return true;
    return false;
}

int     Fixed::getFixedPoint() const
{
    return this->_fpnt;
}

void    Fixed::setFixedPoint(int fpnt)
{
    this->_fpnt = fpnt;
}

int     Fixed::getRawBits() const
{
    return this->_fpnt / (1 << this->_fbits);
}

void    Fixed::setRawBits(int const raw)
{
    this->_fpnt = raw * (1 << this->_fbits);
}

int     Fixed::toInt(void) const
{
    return getRawBits();
}

float    Fixed::toFloat(void) const
{
    return (float)this->_fpnt / (float)(1 << this->_fbits);
}
