#include "../include/Span.hpp"
#include<cstdlib>
// #include <random> 
// #include <limits>

//////////////////////////////////////////////////////////////////////////////
//								STANDARD TESTS								//
//////////////////////////////////////////////////////////////////////////////

// int	main(void)
// {
// 	Span sp = Span(5);

// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	return 0;
// }

int	main(void)
{
	Span			test(1);
	unsigned int	spanLen = 0;

	std::cout << std::endl;
	std::cout << "TEST : 0 numbers inside" << std::endl;

	try
	{
		spanLen = test.shortestSpan();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		spanLen = test.longestSpan();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	test.addNumber(-315467);
	std::cout << spanLen << std::endl;
	std::cout << "TEST : 1 numbers inside" << std::endl;
	try
	{
		spanLen = test.shortestSpan();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		spanLen = test.longestSpan();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "TEST : full span" << std::endl;
}

//////////////////////////////////////////////////////////////////////////
//								BIG TESTS								//
//////////////////////////////////////////////////////////////////////////

// int	main(void) // -std=c++11
// {
// 	int const						randMin = INT_MIN;
// 	int const						randMax = INT_MAX;
// 	std::random_device			 	rd;
// 	std::mt19937					gen(rd());
// 	std::uniform_int_distribution<>	distrib(randMin, randMax);
// 	Span							test(100000);

// 	for (unsigned int i = 0; i < 100000; i++)
// 		test.addNumber(distrib(gen));
// 	std::cout << "The shortest span: " << test.shortestSpan() << std::endl;
// 	std::cout << "The longest span: " << test.longestSpan() << std::endl;
// 	return (0);
// }

// int	main(void) // -std=c++98
// {
// 	Span	test(10000);

// 	srand(time(NULL));
// 	for (unsigned int i = 0; i < 10000; i++)
// 		test.addNumber(rand());
// 	std::cout << "The shortest span: " << test.shortestSpan() << std::endl;
// 	std::cout << "The longest span: " << test.longestSpan() << std::endl;
// 	return (0);
// }