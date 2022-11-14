#include "Stack.hpp"
#include <iostream>

int main()
{
	ft::stack< int, std::vector<int> > a;

	if (a.empty())
		std::cout << "MutantStack is empty" << std::endl;
	a.push(1);
	a.push(2);
	a.push(3);
	a.push(4);
	a.top() = 10;
	std::cout << "MutantStack top is " << a.top() << std::endl;

	std::cout << "pop " << a.top() << std::endl;
	a.pop();

}