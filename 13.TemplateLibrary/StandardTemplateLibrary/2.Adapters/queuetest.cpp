#include "interval.h"
#include <iostream>
#include <queue>
#include <list>

using namespace std;

int main(void)
{
	//queue<Interval> store;
	queue<Interval, list<Interval> > store;
	store.push(Interval(7, 41));
	store.push(Interval(4, 32));
	store.push(Interval(5, 53));
	store.push(Interval(2, 14));
	store.push(Interval(6, 25));

	while(!store.empty())
	{
		cout << store.front() << endl;
		store.pop();
	}
}







