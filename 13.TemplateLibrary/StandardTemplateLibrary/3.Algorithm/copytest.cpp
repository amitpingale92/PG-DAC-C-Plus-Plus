#include "interval.h"
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

bool Compare(const Interval& a, const Interval& b)
{
	return a.Seconds() < b.Seconds();
}

int main(void)
{
	list<Interval> store;
	store.push_back(Interval(6, 51));
	store.push_back(Interval(3, 32));
	store.push_back(Interval(5, 23));
	store.push_back(Interval(7, 14));
	store.push_back(Interval(4, 45));

	vector<Interval> temp(store.size());
	copy(store.begin(), store.end(), temp.begin());
	sort(temp.begin(), temp.end(), Compare);
	copy(temp.begin(), temp.end(), store.begin());

	for(list<Interval>::iterator i = store.begin(); i != store.end(); ++i)
		cout << *i << endl;
}








