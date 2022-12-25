#include "../include/Span.hpp"

//******************************************************************//
//								PUBLIC								//
//******************************************************************//

//////////////////////////////////////////
//				FUNCTIONS				//
//////////////////////////////////////////

unsigned int	Span::shortestSpan(void)	const
{
	if (this->mVec.size() < 2)
		throw(NotEnoughNumbersException());
	else
	{

	}
}

unsigned int	Span::longestSpan(void)	const
{
	if (this->mVec.size() < 2)
		throw(NotEnoughNumbersException());
	else
	{
		
	}
}

void	Span::addNumber(int const num)
{
	if (this->mSize == this->mVec.size())
		throw (SpanIsFullException());
	else
		this->mVec.push_back(num);
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
	this->mVec.clear();
	this->mSize = rhs.mSize;
	for (unsigned int i = 0; i < this->mSize; i++)
		this->mVec.push_back(rhs.mVec.at(i));
}
