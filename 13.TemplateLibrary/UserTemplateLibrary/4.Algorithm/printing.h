#ifndef PRINTING_H
#define PRINTING_H

#include <iostream>

namespace Generic
{
	template<typename ForwardIterator>
	void Print(ForwardIterator begin, ForwardIterator end)
	{
		for(ForwardIterator i = begin; i != end; ++i)
		{
			std::cout << *i << " ";
		}

		std::cout << std::endl;
	}
    /*
	template<typename ForwardIterator, typename UnaryPredicate>
	void PrintSelected(ForwardIterator begin, ForwardIterator end, UnaryPredicate allowed)
    */
    
    template<typename ForwardIterator>
    void PrintSelected(ForwardIterator begin, ForwardIterator end, bool& allowed)
	{
		for(ForwardIterator i = begin; i != end; ++i)
		{
			if(allowed(*i))
				std::cout << *i << " ";
		}

		std::cout << std::endl;
	}
}

#endif

