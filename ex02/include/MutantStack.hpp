#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

// IS THERE A GENERIC TYPE OF ITERATOR 
// TO BYPASS THE DEFAULT CONTAINER TYPE OF STACK ?

template< typename T >
class	MutantStack : public std::stack<T>
{
	public:

		typename std::deque<T>::iterator	begin(void)
		{
			return (std::begin(this->c));
		}

		typename std::deque<T>::const_iterator	begin(void)	const
		{
			return (std::begin(this->c));
		}

		typename std::deque<T>::iterator	end(void)
		{
			return (std::end(this->c));
		}

		typename std::deque<T>::const_iterator	end(void)	const
		{
			return (std::end(this->c));
		}

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