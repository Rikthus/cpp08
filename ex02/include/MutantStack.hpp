#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template< typename T >
class	MutantStack : public std::stack<T>
{
	public:

		

		MutantStack(MutantStack const & src) : std::stack<T>(src)
		{
		};
		MutantStack(void)
		{
			std::stack<T>();
		};
		~MutantStack(void)
		{
		};
		MutantStack &	operator=(MutantStack const & rhs)
		{
			if (this != &rhs)
				std::stack<T>::operator=(rhs);
			return (*this);
		}
};

#endif