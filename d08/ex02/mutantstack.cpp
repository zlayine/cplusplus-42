#include "mutantstack.hpp"


template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return this->c.begin();
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return this->c.end();
}

template<typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::cbegin() const
{
	return this->c.cbegin();
}

template<typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::cend() const
{
	return this->c.cend();
}

template<typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rbegin()
{
	return this->c.rbegin();
}

template<typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rend()
{
	return this->c.rend();
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rcbegin() const
{
	return this->c.rcbegin();

}

template<typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rcend() const
{
	return this->c.rcend();
}
