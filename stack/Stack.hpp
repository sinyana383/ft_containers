#ifndef LUNCH_STACK_HPP
#define LUNCH_STACK_HPP
#include <vector>

namespace ft
{

	// Container - контенеры типа SequenceContainer
	// vector - default underlying container
	template < class T, class Container = std::vector<T> >
	class stack
	{
	public:
		typedef typename Container::value_type			value_type; // тип элемента в контейнере стака
		typedef typename Container::size_type			size_type;	// тип переменной для size()
		typedef Container								container_type;

		template <class T1, class Container1> friend  bool operator== (const stack<T1,Container1>& lhs, const stack<T1,Container1>& rhs);
		template <class T1, class Container1> friend  bool operator< (const stack<T1,Container1>& lhs, const stack<T1,Container1>& rhs);
		template <class T1, class Container1> friend  bool operator!= (const stack<T1,Container1>& lhs, const stack<T1,Container1>& rhs);
		template <class T1, class Container1> friend  bool operator> (const stack<T1,Container1>& lhs, const stack<T1,Container1>& rhs);
		template <class T1, class Container1> friend  bool operator<= (const stack<T1,Container1>& lhs, const stack<T1,Container1>& rhs);
		template <class T1, class Container1> friend  bool operator>= (const stack<T1,Container1>& lhs, const stack<T1,Container1>& rhs);
	protected:
		Container c;

	public:
		stack() : c(){}
		explicit stack( const container_type &ctnr ) : c(ctnr){}

		// Capacity
		bool 		empty() { return c.empty(); }
		size_type	size() { return c.size(); }

		// Element access
		value_type 		 &top() { return c.back(); }
		const value_type &top() const { return c.back(); }

		// Modifiers
		void push(const value_type& val) { c.push_back(val); }
		void pop() { c.pop_back(); }
	};

	template <class T, class Container>  bool operator== (const stack<T,Container>& lhs, const stack<T,Container>& rhs)
	{
		return lhs.c == rhs.c;
	}
	template <class T, class Container>  bool operator!= (const stack<T,Container>& lhs, const stack<T,Container>& rhs)
	{
		return lhs.c != rhs.c;
	}
	template <class T, class Container>  bool operator<  (const stack<T,Container>& lhs, const stack<T,Container>& rhs)
	{
		return lhs.c < rhs.c;
	}
	template <class T, class Container>  bool operator<= (const stack<T,Container>& lhs, const stack<T,Container>& rhs)
	{
		return lhs.c <= rhs.c;
	}
	template <class T, class Container>  bool operator>  (const stack<T,Container>& lhs, const stack<T,Container>& rhs)
	{
		return lhs.c > rhs.c;
	}
	template <class T, class Container>  bool operator>= (const stack<T,Container>& lhs, const stack<T,Container>& rhs)
	{
		return lhs.c >= rhs.c;
	}

}


#endif
