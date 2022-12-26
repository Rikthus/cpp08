#include "../include/MutantStack.hpp"
#include <vector>

// int	main(void)
// {
// 	MutantStack<int>	mStack;
// 	MutantStack<int>	assignationStack;

// 	std::cout << std::endl;
// 	std::cout << "Testing stack member functions: " << std::endl;
// 	std::cout << "Is mutant stack empty ? " << mStack.empty() << std::endl;
// 	mStack.push(5);
// 	std::cout << "Is mutant stack empty ? " << mStack.empty() << std::endl;
// 	std::cout << std::endl;
// 	mStack.push(17);
// 	std::cout << "Top value: " << mStack.top() << std::endl;
// 	std::cout << "Iterator on beginning of stack: " << *(mStack.begin()) << std::endl;
// 	std::cout << "Iterator on end of stack (after the last object): " << *(mStack.end()) << std::endl;
// 	mStack.pop();
// 	std::cout << std::endl;
// 	std::cout << "Size of the mutant stack " << mStack.size() << std::endl;
// 	std::cout << std::endl;

// 	std::cout << "Testing copy constructor: ";
// 	MutantStack<int> const	cpStack(mStack);
// 	std::cout << cpStack.top() << std::endl;
// 	std::cout << "Iterator of const Mutant Stack: " << *(cpStack.begin()) << std::endl;

// 	std::cout << "Testing assignation operator: ";
// 	assignationStack = cpStack;
// 	std::cout << assignationStack.top() << std::endl;


// 	return (0);
// }

int main()
{
	std::cout << "MUTANT STACK TESTS-----------------" << std::endl;
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::deque<int>::iterator it = mstack.begin(); // should be mutant iterator
	std::deque<int>::iterator ite = mstack.end(); // should be mutant iterator
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "VECTOR TESTS----------------------" << std::endl;

	std::vector<int> vec;

	vec.push_back(5);
	vec.push_back(17);
	std::cout << vec.back() << std::endl;
	vec.pop_back();
	std::cout << vec.size() << std::endl;
	vec.push_back(3);
	vec.push_back(5);
	vec.push_back(737);
	vec.push_back(0);
	std::vector<int>::iterator itVec = vec.begin();
	std::vector<int>::iterator iteVec = vec.end();
	++itVec;
	--itVec;
	while (itVec != iteVec)
	{
		std::cout << *itVec << std::endl;
		++itVec;
	}
	return 0;
}