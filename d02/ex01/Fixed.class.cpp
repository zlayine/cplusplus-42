#include "Fixed.class.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_fpnt = 0;
}

Fixed::Fixed(int const val)
{
    std::cout << "Int constructor called" << std::endl;
    // setRawBits(val);
}

Fixed::Fixed(float const val)
{
    std::cout << "Float constructor called" << std::endl;
    // *this = src;
    // this->_fpnt = 
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Assignation operator called" << std::endl;

    this->setRawBits(rhs.getRawBits());
    return *this;
}

int     Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fpnt / (1 << this->_fbits));
}

void    Fixed::setRawBits(int const raw)
{
    this->_fpnt = raw * (1 << this->_fbits);
}

int     Fixed::toInt(void) const
{
    return getRawBits();
}

int     Fixed::toFloat(void) const
{
    return getRawBits();
}
