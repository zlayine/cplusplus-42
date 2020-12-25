#include "Fixed.class.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fpnt = 0;
}

Fixed::Fixed(int const val)
{
    std::cout << "Int constructor called" << std::endl;
    // *this = src;
}

Fixed::Fixed(float const val)
{
    std::cout << "Float constructor called" << std::endl;
    // *this = src;
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
    return (this->fpnt / (1 << this->fbits));
}


int     getFixedPoint(int const val)
{
    int sign;

    sign = val < 0 ? 1 : 0;

}

int     getFixedPoint(float const val)
{

}

void    Fixed::setRawBits(int const raw)
{
    this->fpnt = raw;
}