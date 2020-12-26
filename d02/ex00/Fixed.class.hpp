#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{

private:
    int                 _fpnt;
    static int const    _fbits = 8;

public:

    Fixed(void);
    Fixed(Fixed const & src);
    ~Fixed(void);

    Fixed &    operator=(Fixed const & rhs);

    int     getRawBits(void) const;

    void    setRawBits(int const raw);
};

#endif
