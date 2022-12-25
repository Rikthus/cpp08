#include "../include/Span.hpp"

//******************************************************************//
//								PUBLIC								//
//******************************************************************//

//////////////////////////////////////////
//				FUNCTIONS				//
//////////////////////////////////////////

unsigned int	Span::shortestSpan(void)
{
	unsigned int		shortSpan;
	unsigned int		diff;
	unsigned int const	vecSize = this->mVec.size() - 1;

	if (this->mVec.size() < 2)
		throw(NotEnoughNumbersException());
	std::sort(this->mVec.begin(), this->mVec.end());
	shortSpan = this->mVec.at(1) - this->mVec.at(0);
	for (unsigned int i = 1; i < vecSize; i++)
	{
		diff = this->mVec.at(i + 1) - this->mVec.at(i);
		if (shortSpan > diff)
			shortSpan = diff;
	}
	return (shortSpan);
}

unsigned int	Span::longestSpan(void)
{
	unsigned int	longSpan;
	if (this->mVec.size() < 2)
		throw(NotEnoughNumbersException());
	std::sort(this->mVec.begin(), this->mVec.end());
	longSpan = this->mVec.back() - this->mVec.front();
	return (longSpan);
}

void	Span::addNumber(int const num)
{
	if (this->mSize == this->mVec.size())
		throw (SpanIsFullException());
	else
		this->mVec.push_back(num);
}

void	Span::fill(std::vector<int>::iterator itStart, std::vector<int>::iterator itStop)
{
	
}

//////////////////////////////////////////
//				BUILDERS				//
//////////////////////////////////////////

Span::Span(unsigned int size) : mSize(size) {}

Span::Span(Span const & src) : mSize(src.mSize)
{
	for (unsigned int i = 0; i < this->mSize; i++)
	{
		this->mVec.push_back(src.mVec.at(i));
	}
}

Span::Span(void) : mSize(0) {}

Span::~Span(void) {}

//////////////////////////////////////////////////
//				OPERATOR OVERLOAD				//
//////////////////////////////////////////////////

Span &	Span::operator=(Span const & rhs)
{
	if (this != &rhs)
	{
		this->mVec.clear();
		this->mSize = rhs.mSize;
		for (unsigned int i = 0; i < this->mSize; i++)
			this->mVec.push_back(rhs.mVec.at(i));
	}
	return (*this);
}

//**************************************************************************//
//								NESTED CLASS								//
//**************************************************************************//

const char	*Span::SpanIsFullException::what(void) const throw()
{
	return ("The Span is already full, cannot add more numbers");
}

const char	*Span::NotEnoughNumbersException::what(void) const throw()
{
	return ("There is not enough numbers to find a span");
}