#include "simplelist.h"
#include "interval.h"
#include <iostream>

using namespace Generic;
using namespace std;

template<typename ElementType, bool LIFO=false>
class SimpleListAdapter
{
public:
	void Insert(const ElementType& entry)
	{
		container.AddElement(entry, LIFO);
	}

	bool Extract(ElementType& entry)
	{
		if(container.HasElements())
		{
			entry = container.FirstElement();
			container.RemoveElement();
			return true;
		}
		return false;
	}
private:
	SimpleList<ElementType> container;
};

int main(void)
{
	//SimpleListAdapter<Interval> store;
	SimpleListAdapter<Interval, true> store;
	store.Insert(Interval(7, 31));
	store.Insert(Interval(4, 52));
	store.Insert(Interval(5, 43));
	store.Insert(Interval(3, 24));
	store.Insert(Interval(6, 35));

	Interval entry;
	while(store.Extract(entry))
		cout << entry << endl;
}


