#include <iostream>
#include <cmath>

using namespace std; 

double Income(double invest, short period, float rate=8)
{
	double amount = invest * pow(1 + rate / 100, period);
	return amount - invest;
}

int main(void)
{
	double p;
	short n;

	cout << "Enter investment and period: ";
	cin >> p >> n;

	cout << "Income in GOLD scheme: "
		 << Income(p, n, 9.5)
		 << endl;
	cout << "Income in SILVER scheme: "
		 << Income(p, n) //Income(p, n, 8) 
		 << endl;
}












