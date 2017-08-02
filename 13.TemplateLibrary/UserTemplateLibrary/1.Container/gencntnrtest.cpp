#include "simplelist.h"
#include "interval.h"
#include <iostream>

using namespace Generic;
using namespace std;

int main(void)
{
	SimpleList<Interval> store;
    
    Interval ms(7, 31); //instantiating object 'ms' from class Interval
	
    store.AddElement(ms);
	store.AddElement(Interval(4, 52));
	store.AddElement(Interval(5, 43));
	store.AddElement(Interval(3, 24));
	store.AddElement(Interval(6, 35));
    

	while(store.HasElements())
	{
		cout << store.FirstElement() << endl;
        store.RemoveElement();
        cout << store.HasElements() << endl;
	}

}











