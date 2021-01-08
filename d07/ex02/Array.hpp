#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>

template<class T>
class Array{

private:
	T	*array;
	int	len;

public:
	Array()
	{
		array = NULL;
		len = 0;
	}

	Array(unsigned int n)
	{
		array = new T[n];
		len = n;
	}

	Array(Array<T> const &src)
	{
		array = new T[src.size()];
		len = src.size();
		for(int i = 0; i < len; i++)
		{
			array[i] = src.array[i];
		}
	}

	~Array()
	{
		delete[] array;
	}

	Array&	operator=(Array const &rhs)
	{
		if (len)
			delete[] array;
		array = new T[rhs.size()];
		len = rhs.size();
		for(int i = 0; i < len; i++)
		{
			array[i] = rhs.array[i];
		}
		return *this;
	}

	T&	operator[](int i)
	{
		if (i >= len)
		{
			std::cout << "Index out of bounds" << std::endl; 
			//exception to throw
		}
		return array[i];
	}

	int	size() const
	{
		return (len);
	}
};

// template< typename T >
// std::ostream&	operator<<(std::ostream& o,T const & a)
// {
// 	o << a;
// 	return (o);
// }

#endif