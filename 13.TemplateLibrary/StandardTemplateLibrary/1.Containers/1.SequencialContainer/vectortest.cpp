#include "interval.h"
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<Interval> store;
	store.push_back(Interval(7, 41));
	store.push_back(Interval(4, 32));
	store.push_back(Interval(5, 53));
	store.push_back(Interval(2, 14));
	store.push_back(Interval(6, 25));
	//store.push_front(Interval(3, 30));

	for(vector<Interval>::iterator i = store.begin(); i != store.end(); ++i)
		cout << *i << "\t" << i->GetTime() << endl;
	
	vector<Interval>::iterator j = store.begin();
	cout << "Third Interval = " << j[2] << endl;
}







