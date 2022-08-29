#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() { std::cout << "Default constructor\n"; }
		virtual ~MutantStack() { std::cout << "Destructor\n"; }
		MutantStack(const MutantStack & rhs) 
		{
			std::cout << "Copy constructor\n";
			this->c = rhs.c;
		}
		MutantStack & operator=(const MutantStack & rhs) 
		{
			std::cout << "Assignment operator\n";
			if (this != &rhs)
				this->c = rhs.c;
			return (*this);
		}

		typedef	typename std::stack<T>::container_type container_type;
		typedef typename container_type::iterator iterator;
		typedef typename container_type::const_iterator const_iterator;
		typedef typename container_type::reverse_iterator reverse_iterator;
		typedef typename container_type::const_reverse_iterator const_reverse_iterator;
		
		iterator				begin(void) { return (this->c.begin()); }
		iterator				end(void) { return (this->c.end()); }

		const_iterator			begin(void) const { return (this->c.begin()); }
		const_iterator			end(void) const { return (this->c.end()); }

		reverse_iterator		rbegin(void) { return (this->c.rbegin()); }
		reverse_iterator		rend(void) { return (this->c.rend()); }

		const_reverse_iterator	rbegin(void) const { return (this->c.rbegin()); }
		const_reverse_iterator	rend(void) const { return (this->c.rend()); }
};

#endif