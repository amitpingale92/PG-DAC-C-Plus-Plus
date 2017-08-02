#include "simplelist.h"
#include "printing.h"
#include <iostream>

using namespace Generic;
using namespace std;

bool IsOdd(long n)
{
	return n % 2 != 0;
}

class IsBiggerThan
{
public:
	IsBiggerThan(long l) : limit(l) {}

	bool operator()(long value) const
	{
		return value > limit;
	}
private:
	long limit;
};

int main(void)
{
	SimpleList<long> squares;
	squares.AddElement(1);
	squares.AddElement(4);
	squares.AddElement(9);
	squares.AddElement(16);
	squares.AddElement(25);
	squares.AddElement(36);
	squares.AddElement(49);
	squares.AddElement(64);
	squares.AddElement(81);

	cout << "All squares: ";
	Print(squares.Begin(), squares.End());

	cout << "Odd squares: ";
	PrintSelected(squares.Begin(), squares.End(), IsOdd);

	cout << "Big squares: ";
	//PrintSelected(squares.Begin(), squares.End(), IsBiggerThan(20));
}











