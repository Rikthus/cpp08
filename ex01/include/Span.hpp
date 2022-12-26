#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class	Span
{
	public:
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);
		void			addNumber(int const num);
		void			fill(std::vector<int>::iterator itStart, std::vector<int>::iterator itStop);

		Span(unsigned int size);
		Span(Span const & src);
		Span(void);
		~Span(void);

		Span &	operator=(Span const & rhs);

		class	SpanIsFullException : public std::exception
		{
			virtual const char	*what(void) const throw();
		};
		class	NotEnoughNumbersException : public std::exception
		{
			virtual const char	*what(void) const throw();
		};
	private:
		unsigned int		mSize;
		std::vector<int>	mVec;
};

#endif