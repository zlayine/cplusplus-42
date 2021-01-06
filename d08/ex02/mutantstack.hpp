#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef T iterator                  iterator;
    typedef T const_iterator            const_iterator;

	const_iterator begin() const;
	const_iterator end() const;

};

template<typename T>
MutantStack<T>::const_iterator	MutantStack<T>::begin() const
{

}

template<typename T>
MutantStack<T>::const_iterator	MutantStack<T>::end() const
{
	
}

#endif