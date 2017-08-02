#include <iostream>

using namespace std;

/*
void Swap(long& first, long& second)
{
	long third = first;

	first = second;
	second = third;
}

void Swap(double& first, double& second)
{
	double third = first;

	first = second;
	second = third;
}
*/

template<typename T> //Swap function template
void Swap(T& first, T& second)
{
	T third = first;

	first = second;
	second = third;
}

int main(void)
{
	long lx = 34, ly = 43;
	cout << "Original long values: " << lx << ", " << ly << endl;
	Swap<long>(lx, ly); //calling templated Swap function with T=long
	cout << "Swapped long values: " << lx << ", " << ly << endl;

	double dx = 5.6, dy = 6.5;
	cout << "Original double values: " << dx << ", " << dy << endl;
	Swap(dx, dy); //Swap<double>(dx, dy) - type deduction from arguments
	cout << "Swapped double values: " << dx << ", " << dy << endl;
}








