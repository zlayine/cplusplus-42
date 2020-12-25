class Fixed
{

private:
    int                 fpnt;
    static int const    fbits = 8;
public:
    Fixed(void);
    Fixed(Fixed const & src);
    ~Fixed(void);

    Fixed &    operator=(Fixed const & rhs);

    int     getRawBits(void) const;

    void    setRawBits(int const raw);
};
