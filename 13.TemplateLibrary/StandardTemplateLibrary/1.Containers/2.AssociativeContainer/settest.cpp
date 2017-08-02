#include "interval.h"
#include <iostream>
#include <set>
#include <functional>

using namespace std;

bool operator>(const Interval& a, const Interval& b)
{
	return b < a;
}

int main(void)
{
	//set<Interval> store; //Defaulf Ascending
	set<Interval, greater<Interval> > store; // Descending
	store.insert(Interval(7, 41));
	store.insert(Interval(4, 32));
	store.insert(Interval(5, 53));
	store.insert(Interval(2, 14));
	store.insert(Interval(6, 25));
	store.insert(Interval(3, 92));

	for(set<Interval>::iterator i = store.begin(); i != store.end(); ++i)
		cout << *i << "\t" << i->GetTime() << endl;
	
}







