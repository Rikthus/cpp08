#include "../include/MutantStack.hpp"

int	main(void)
{
	MutantStack<int>	mStack;
	MutantStack<int>	assignationStack;

	mStack.push(5);
	mStack.push(17);
	std::cout << mStack.top() << std::endl;
	mStack.pop();
	std::cout << mStack.size() << std::endl;
	MutantStack<int>	cpStack(mStack);
	std::cout << cpStack.top() << std::endl;

	assignationStack = cpStack;
	std::cout << assignationStack.top() << std::endl;

	return (0);
}