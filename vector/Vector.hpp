#ifndef LUNCH_VECTOR_HPP
#define LUNCH_VECTOR_HPP
#include <memory>

namespace ft
{
	template < class T, class Allocator = std::allocator<T> >
	class vector
	{
	public:
		typedef size_t 		size_type;
		typedef Allocator	allocator_type;

		//construct/destroy
		explicit vector(const Allocator& = Allocator());	// default
		explicit vector(size_type n, const T& value = T(),	// fill
						const Allocator& = Allocator());
		template <class InputIterator>
		vector(InputIterator first, InputIterator last, 	// range
			   const Allocator& = Allocator());
		vector(const vector<T,Allocator>& x);				//copy
		~vector();
		//copy
		vector<T,Allocator>& operator=(const vector<T,Allocator>& x);
		template <class InputIterator>
		void assign(InputIterator first, InputIterator last);
		void assign(size_type n, const T& u);
		allocator_type get_allocator() const;

		// iterators:
		//...

		//capacity/size
		size_type size() const;
		size_type max_size() const;				// potential
		void resize(size_type sz, T c = T());	// resize to n elements
		size_type capacity() const;				// size of storage
		bool empty() const;
		void reserve(size_type n);				// alloc n el

		//access
		//...

		//modifiers
		//...
		void push_back(const T& x);
		void pop_back();
		void swap(vector<T,Allocator>&);	// exchange the content between 2 vectors
		void clear();
	};

		// equal/non-equal pos and el
		template <class T, class Allocator>
		bool operator==(const vector<T,Allocator>& x,
						const vector<T,Allocator>& y);
		template <class T, class Allocator>
		bool operator!=(const vector<T,Allocator>& x,
						const vector<T,Allocator>& y);
		// lexicographical
		template <class T, class Allocator>
		bool operator< (const vector<T,Allocator>& x,
						const vector<T,Allocator>& y);
		template <class T, class Allocator>
		bool operator> (const vector<T,Allocator>& x,
						const vector<T,Allocator>& y);
		template <class T, class Allocator>
		bool operator>=(const vector<T,Allocator>& x,
						const vector<T,Allocator>& y);
		template <class T, class Allocator>
		bool operator<=(const vector<T,Allocator>& x,
						const vector<T,Allocator>& y);

	template <class T, class Allocator>
	void swap(vector<T,Allocator>& x, vector<T,Allocator>& y);
}

#endif //LUNCH_VECTOR_HPP
