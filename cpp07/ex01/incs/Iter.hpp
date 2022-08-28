#ifndef ITER_HPP
# define ITER_HPP

template<typename T, typename F>
void	iter(T* ptr, int len, F f)
{
	for (int i = 0; i < len; i++)
		f(ptr[i]);
}

template<typename T>
void	increment(T data)
{
	data += 1;
}

#endif