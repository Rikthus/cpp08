#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class	Span
{
	public:
		unsigned int	shortestSpan(void)	const;
		unsigned int	longestSpan(void)	const;
		void			addNumber(int const num);

		Span(unsigned int size);
		Span(Span const & src);
		Span(void);
		~Span(void);

		Span &	operator=(Span const & rhs);

		class	SpanIsFullException : std::exception
		{
			virtual const char	*what(void) const	throw()
			{
				return ("The Span is already full, connot add more numbers");
			}
		};
		class	NotEnoughNumbersException : std::exception
		{
			virtual const char	*what(void) const	throw()
			{
				return ("There is not enough numbers to find a span");
			}
		};
	private:
		unsigned int		mSize;
		std::vector<int>	mVec;
};

#endif