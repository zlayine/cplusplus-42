#ifndef ITER_H
# define ITER_H

template< typename T, typename U>
void		iter(T const *array, T const & len, U const & fun)
{
	for(int i = 0; i < len; i++)
	{
		fun(array[i]);
	}
}

#endif