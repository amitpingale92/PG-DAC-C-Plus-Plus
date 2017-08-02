#include "interval.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

Interval Combine(const Interval& a, const Interval& b)
{
	long m = a.Minutes() + b.Minutes();
	long s = a.Seconds() + b.Seconds();

	return Interval(m, s);
}

void Print(const Interval& a)
{
	cout << a << endl;
}

int main(void)
{
	vector<Interval> store;
	store.push_back(Interval(6, 51));
	store.push_back(Interval(3, 32));
	store.push_back(Interval(5, 23));
	store.push_back(Interval(7, 14));
	store.push_back(Interval(4, 45));

	for_each(store.begin(), store.end(), Print);
	Interval total = accumulate(store.begin(), store.end(), Interval(0, 0), Combine);
	cout << "Total = " << total << endl;
}








