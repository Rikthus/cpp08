#include "../include/MutantStack.hpp"

int	main(void)
{
	MutantStack<int>	mStack;
	MutantStack<int>	assignationStack;

	std::cout << std::endl;
	std::cout << "Testing stack member functions: " << std::endl;
	std::cout << "Is mutant stack empty ? " << mStack.empty() << std::endl;
	mStack.push(5);
	std::cout << "Is mutant stack empty ? " << mStack.empty() << std::endl;
	std::cout << std::endl;
	mStack.push(17);
	std::cout << mStack.top() << std::endl;
	mStack.pop();
	std::cout << std::endl;
	std::cout << "Size of the mutant stack " << mStack.size() << std::endl;
	std::cout << std::endl;

	std::cout << "Testing copy constructor: ";
	MutantStack<int>	cpStack(mStack);
	std::cout << cpStack.top() << std::endl;

	std::cout << "Testing assignation operator: ";
	assignationStack = cpStack;
	std::cout << assignationStack.top() << std::endl;

	return (0);
}