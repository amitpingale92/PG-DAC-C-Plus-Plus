#include "interval.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <utility>

using namespace std;
using rel_ops::operator>;

int main(void)
{
	vector<Interval> store;
	store.push_back(Interval(6, 51));
	store.push_back(Interval(3, 32));
	store.push_back(Interval(5, 23));
	store.push_back(Interval(7, 14));
	store.push_back(Interval(4, 45));

	//sort(store.begin(), store.end());
	sort(store.begin(), store.end(), greater<Interval>());

	for(vector<Interval>::iterator i = store.begin(); i != store.end(); ++i)
		cout << *i << endl;
}








