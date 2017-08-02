#include "interval.h"
#include <iostream>
#include <stack>
#include <list>

using namespace std;

int main(void)
{
	//stack<Interval> store;
	stack<Interval, list<Interval> > store;
	store.push(Interval(7, 41));
	store.push(Interval(4, 32));
	store.push(Interval(5, 53));
	store.push(Interval(2, 14));
	store.push(Interval(6, 25));

	while(!store.empty())
	{
		cout << store.top() << endl;
		store.pop();
	}
}







