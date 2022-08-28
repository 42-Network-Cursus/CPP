#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stdlib.h>

template<typename T>
class Array
{
	private:
		T*				_tab;
		unsigned int	_size;
	public:
		Array(): _tab(NULL), _size(0) { 
			std::cout << "Default Array Constructor\n"; }
		Array(const unsigned int n): _tab(new T[n]), _size(n) {
			std::cout << "Array Constructor w/ uInt param\n";	}
		~Array() {
			std::cout << "Array Destructor\n"; 
			delete[] _tab; }
		Array(const Array<T> & rhs): _tab(NULL), _size(0) { 
			std::cout << "Array Copy Constructor\n";
			*this = rhs; }

		Array<T> &	operator=(const  Array<T> & rhs)
		{
			std::cout << "Array Assignment Operator\n";
			if (this != &rhs)
			{
				if (_size > 0)
					delete [] _tab;
				_size = rhs._size;
				_tab = new T[rhs._size];
				for (unsigned int i = 0; i < _size; i++)
					_tab[i] = rhs._tab[i];
			}
			return (*this);
		}

		T &	operator[](const int i) const
		{
			if (i < 0 || static_cast<unsigned int>(i) >= _size)
				throw InvalidIndexException();
			return (_tab[i]);
		}

		unsigned int	size() const { return (_size); }

		class InvalidIndexException : public std::exception
		{
		public:
			virtual const char* what() const throw()
			{
				return ("Invalid index used");
			}
		};		
};

#endif