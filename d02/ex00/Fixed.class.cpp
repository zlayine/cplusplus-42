#include "Fixed.class.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_fpnt = 0;
}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
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
    return this->_fpnt / (1 << this->_fbits);
}

void    Fixed::setRawBits(int const raw)
{
    this->_fpnt = raw * (1 << this->_fbits);
}
