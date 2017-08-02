#include "interval.h"
#include <iostream>
#include <queue>
#include <vector>
#include <functional>
#include <utility>

using namespace std;
using rel_ops::operator>;

int main(void)
{
	priority_queue<Interval> store;
	//priority_queue<Interval, vector<Interval>, greater<Interval> > store;
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







