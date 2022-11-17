#include "Stack.hpp"
#include <iostream>
#include <stack>


int main()
{
//	ft::stack< int, std::vector<int> > a;
//
//	if (a.empty())
//		std::cout << "MutantStack is empty" << std::endl;
//	a.push(1);
//	a.push(2);
//	a.push(3);
//	a.push(4);
//	a.top() = 10;
//	std::cout << "MutantStack top is " << a.top() << std::endl;
//
//	std::cout << "pop " << a.top() << std::endl;
//	a.pop();

	std::vector<int> a1;	// замени на свой ft::vector
	std::vector<int> a2;

	ft::stack<int, std::vector<int> > myStack;
	std::stack<int, std::vector<int> > stack0;

	std::cout << "================EMPTY STACK====================" << std::endl;
	std::cout << "myStack:\t" << "empty(): " << myStack.empty() << std::endl;
	std::cout << "stack:  \t" << "empty(): " << stack0.empty() << std::endl;
	std::cout << std::endl;
	std::cout << "myStack:\t" << "size(): " << myStack.size() << std::endl;
	std::cout << "stack:  \t" << "size(): " << stack0.size() << std::endl;
	std::cout << std::endl;
	std::cout << "myStack:\t" << "top(): " << myStack.size() << std::endl;
	std::cout << "stack:  \t" << "top(): " << stack0.size() << std::endl;
	std::cout << std::endl;
}