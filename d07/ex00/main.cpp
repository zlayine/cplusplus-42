#include <iostream>

template <typename T>
void	swap(T& x, T& y)
{
	T tmp;

	tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
const T& max(const T& x, const T& y)
{
    return (x > y) ? x : y;
}

template <typename T>
const T& min(const T& x, const T& y)
{
    return (x > y) ? y : x;
}

int main( void ) {
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return (0);
}