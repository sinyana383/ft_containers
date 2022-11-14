

namespace ft
{
	template<class T, class Container>
	stack<T, Container>::stack() : c()
	{}

	template<class T, class Container>
	stack<T, Container>::stack(const container_type &ctnr) : c(ctnr)
	{}

	// CAPACITY//////////////////////
	template<class T, class Container>
	bool stack<T, Container>::empty()
	{
		return c.empty;
	}

	template<class T, class Container>
	typename stack<T, Container>::size_type //тип функции
	stack<T, Container>::size()				//название
	{
		return c.size();
	}

	//ELEMENT ACCESS//////////////////////
	template<class T, class Container>
	typename stack<T, Container>::value_type &
	stack<T, Container>::top()
	{
		return c.back();
	}

	template<class T, class Container>
	const typename stack<T, Container>::value_type & stack<T, Container>::top() const
	{
		return c.back();
	}

	//MODIFIERS//////////////////////
	template<class T, class Container>
	void stack<T, Container>::push(const value_type &val)
	{
		c.push_back(val);
	}

	template<class T, class Container>
	void stack<T, Container>::pop()
	{
		c.pop_back();
	}

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