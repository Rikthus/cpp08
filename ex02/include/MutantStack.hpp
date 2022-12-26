#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template< typename T >
class	MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator	begin(void)
		{
			return (std::begin(this->c));
		}

		const_iterator	begin(void)	const
		{
			return (std::begin(this->c));
		}

		iterator	end(void)
		{
			return (std::end(this->c));
		}

		const_iterator	end(void)	const
		{
			return (std::end(this->c));
		}

		MutantStack(MutantStack const & src) : std::stack<T>(src)
		{
		};
		MutantStack(void)
		{
			std::stack<int>();
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
