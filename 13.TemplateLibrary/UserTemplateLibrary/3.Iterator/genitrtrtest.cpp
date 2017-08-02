#include "simplelist.h"
#include "interval.h"
#include <iostream>

using namespace Generic;
using namespace std;

int main(void)
{
	SimpleList<Interval> store;
	store.AddElement(Interval(7, 31));
	store.AddElement(Interval(4, 52));
	store.AddElement(Interval(5, 43));
	store.AddElement(Interval(3, 24));
	store.AddElement(Interval(6, 35));

	for(SimpleList<Interval>::Iterator i = store.Begin(); i != store.End(); ++i)
		cout << *i << "\t" << i->GetTime() << endl;
	
}











