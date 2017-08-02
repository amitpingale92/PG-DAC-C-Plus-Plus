#include "printing.h"
#include <iostream>

using namespace Generic;
using namespace std;

bool IsOdd(long n)
{
	return n % 2;
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
	long squares[] = {1, 4, 9, 16, 25, 36, 49, 64, 81};

	cout << "All squares: ";
	Print(squares, squares + 9);

	cout << "Odd squares: ";
	PrintSelected(squares, squares + 9, IsOdd);

	cout << "Big squares: ";
	PrintSelected(squares, squares + 9, IsBiggerThan(20));
}











