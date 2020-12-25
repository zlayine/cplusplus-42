class Fixed
{

private:
    int                 fpnt;
    static int const    fbits = 8;
public:
    Fixed(void);
    Fixed(int const val);
    Fixed(float const val);
    Fixed(Fixed const & src);
    ~Fixed(void);

    Fixed &    operator=(Fixed const & rhs);

    int     getRawBits(void) const;

    void    setRawBits(int const raw);

    float   toFloat(void) const;

    int     toInt(void) const;
};

std::ostream &  operator<<(std::ostream & o, Fixed const & rhs);