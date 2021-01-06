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
		array = new T;
		len = 0;
	}

	Array(unsigned int n)
	{
		array = new T[n];
		len = n;
		for(int i = 0; i < n; i++)
		{
			array[i] = 0;
		}
	}

	Array(Array const &src)
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
		std::cout << "iter called " << i << std::endl;
		if (i >= len)
		{
			std::cout << "Index out of bounds" << std::endl; 
			//exception to throw
		}
		std::cout << "iter called " << i << std::endl;
		return array[i];
	}

	void* operator new(std::size_t s)
    {
        return ::operator new(s);
    }

	void* operator new[](std::size_t s)
    {
        return ::operator new(s);
    }

	int	size() const
	{
		return (len);
	}
};

template< typename T >
std::ostream&	operator<<(std::ostream& o,T const & a)
{
	o << a;
	return (o);
}

#endif