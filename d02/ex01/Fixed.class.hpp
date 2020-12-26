#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{

private:
    int                 _fpnt;
    int                 _isfloat;
    static int const    _fbits = 8;
    
public:

    Fixed(void);
    Fixed(int const val);
    Fixed(float const val);
    Fixed(Fixed const & src);
    ~Fixed(void);

    Fixed &    operator=(Fixed const & rhs);

    int     getRawBits(void) const;

    void    setRawBits(int const raw);

    int     getFixedPoint() const;

    void     setFixedPoint(int fpnt);

    float   toFloat(void) const;

    int     toInt(void) const;

    bool    isFloat() const;
};

std::ostream &  operator<<(std::ostream & o, Fixed const & rhs);

#endif