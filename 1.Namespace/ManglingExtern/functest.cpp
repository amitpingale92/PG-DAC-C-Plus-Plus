#include <iostream>

using namespace std;

extern "C" int CountPrime(long, long);

int main(void)
{
	long low, high;

	cout << "Enter limits: ";
	cin >> low >> high;

	cout << "Number of primes = "
		 << CountPrime(low, high)
		 << endl;
}

