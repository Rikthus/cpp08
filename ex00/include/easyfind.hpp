#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

class	NotFoundException : public std::exception
{
	virtual	const char	*what(void)	const	throw()
	{
		return ("No occurence of the element found in the container");
	}
};

template< typename T >
typename T::iterator	easyfind(T & intContainer, int const value)
{
	typename T::iterator	itInput;

	itInput = find(intContainer.begin(), intContainer.end(), value);
	if (itInput == intContainer.end())
		throw(NotFoundException());
	else
		return (itInput);
}

#endif