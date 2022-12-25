#include "../include/easyfind.hpp"
#include <vector>

int	main(void)
{
	std::vector<int>			vec;
	std::vector<int>::iterator	vecIt;
	int							value;

	vec.push_back(0);
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	
	value = 0;

	try
	{
		vecIt = easyfind(vec, value);
		std::cout << value << " found in the container" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << value << " NOT found in the container" << std::endl;
	}
	return (0);
}